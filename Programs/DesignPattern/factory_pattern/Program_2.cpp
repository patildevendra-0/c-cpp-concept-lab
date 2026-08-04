#include <iostream>
#include <memory>

class Person
{
public:
    virtual void speak() = 0;
};

class Rahul : public Person
{
public:
    void speak() override
    {
        std::cout << "Rahul speaking...." << std::endl;
    }
};

class Suresh : public Person
{
public:
    void speak() override
    {
        std::cout << "Suresh speaking...." << std::endl;
    }
};

class Factory
{
    public:
        static std::unique_ptr<Person> create(const std::string &name)
        {   
            if(name == "Rahul")
                return std::make_unique<Rahul>();

            if(name == "Suresh")
                return std::make_unique<Suresh>();
            
            return nullptr;
        }
};



int main()
{
    auto obj = Factory::create("Suresh");
    obj->speak();

    return 0;
}