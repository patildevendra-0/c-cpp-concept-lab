#include <iostream>
#include <functional>
#include <memory>
#include <unordered_map>

class Shape
{
    public:
        virtual void ActiveTool() = 0;
};

class Factory
{
public:
    using Creator = std::function<std::unique_ptr<Shape>()>;

    static std::unordered_map<std::string, Creator> &getMap()
    {
        static std::unordered_map<std::string, Creator> Creators;
        return Creators;
    }

    static void Register(std::string name, Creator creator)
    {
        getMap()[name] = creator;
    }

    static std::unique_ptr<Shape> create(std::string name)
    {
        auto it = getMap().find(name);
        if (it != getMap().end())
        {
            return it->second();
        }
        return nullptr;
    }
};

class Circle:public Shape
{   
    public:
        void ActiveTool() override
        {
            std::cout<<"Current Active tool circle...\n";
        }

        static bool registered;
};

bool Circle::registered = []()
{
    Factory::Register("Circle",[](){
        return std::make_unique<Circle>();
    });
    return true;
}();



int main()
{

    auto s1 = Factory::create("Circle");
    s1->ActiveTool();

    return 0;
}