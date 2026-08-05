#include <iostream>
#include <functional>
#include <unordered_map>
#include <memory>

class Detector
{
public:
    virtual void connectDetector() = 0;
    virtual void disconnectDetector() = 0;
    virtual void startAcquision() = 0;
};


class DetetctorFactory
{
public:
    using Function = std::function<std::unique_ptr<Detector>()>;

    static std::unordered_map<std::string, Function> &getMap()
    {
        static std::unordered_map<std::string, Function> Functions;
        return Functions;
    }

    static void registerFunction(std::string name, Function function)
    {
        getMap()[name] = function;
    }

    static std::unique_ptr<Detector> ActivateDetector(std::string name)
    {
        auto it = getMap().find(name);
        if (it != getMap().end())
        {
            return it->second();
        }
        return nullptr;
    }
};

class CanonDetector : public Detector
{
public:
    static bool registered;

    void connectDetector() override
    {
        std::cout << "Canon Detector connected ...\n";
    }

    void disconnectDetector() override
    {
        std::cout << "Canon Detector Dissconnected ...\n";
    }

    void startAcquision() override
    {
        std::cout << "Acquisition started ...\n";
    }
};

bool CanonDetector::registered = []()
{   
    DetetctorFactory::registerFunction("Canon",[](){
        return std::make_unique<CanonDetector>();
    });
    return true;
}();

class SonyDetector : public Detector
{
public:
    static bool registered;

    void connectDetector() override
    {
        std::cout << "Sony Detector connected ...\n";
    }

    void disconnectDetector() override
    {
        std::cout << "Sony Detector Dissconnected ...\n";
    }

    void startAcquision() override
    {
        std::cout << "Acquisition started ...\n";
    }
};

bool SonyDetector::registered = []()
{   
    DetetctorFactory::registerFunction("Sony",[](){
        return std::make_unique<SonyDetector>();
    });
    return true;
}();


int main()
{
    auto obj_1 = DetetctorFactory::ActivateDetector("Canon");
    obj_1->connectDetector();
    obj_1->startAcquision();
    obj_1->disconnectDetector();

    return 0;
}