#include<iostream>

class Pizza
{
    public:
        virtual void makePizza() = 0;
        virtual int cost() = 0;
};

class Basic:public Pizza
{
    public:
        void makePizza()
        {
            std::cout<<"MAKING BASIC PIZZA...\n";
        }

        int cost()
        {
            return 100;
        }
};

class PizzaDecorator:public Pizza
{
    public:
        Pizza* pizza;
    
    public:
        PizzaDecorator(Pizza* p)
        {
            pizza = p;
        }
};

class cheesePizza :public PizzaDecorator
{
    public:
        cheesePizza(Pizza* p):PizzaDecorator(p)
        {

        }

        void makePizza() override
        {
            pizza->makePizza();
            std::cout<<"+ cheese...\n";
        }

        int cost() override
        {
            return pizza->cost() + 20;
        }
};

int main()
{
    Basic bobj;
    cheesePizza cobj(&bobj);

    cobj.makePizza();
    std::cout << "\nTotal Price : "
    << cobj.cost()
    << std::endl;

    return 0;
}