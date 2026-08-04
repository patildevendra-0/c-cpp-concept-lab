#include <iostream>

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
        std::cout << "Rahul speak..\n";
    }
};

class Suresh : public Person
{
public:
    void speak() override
    {
        std::cout << "Suresh speak..\n";
    }
};

class PersonFactory
{
public:
    static Person *create(const std::string &name)
    {
        if (name == "Rahul")
        {
            return new Rahul();
        }
        else if (name == "Suresh")
        {
            return new Suresh();
        }
        else
        {
            std::cout << "PERSON NOT FOUND...";
        }
        return nullptr;
    }
};

int main()
{
    Person *ptr = PersonFactory::create("Rahul");
    ptr->speak();

    return 0;
}