#include<iostream>

class Strategy
{
    public:
        virtual void Execute() = 0;
};

class Add:public Strategy
{
    public:
        void Execute()
        {
            std::cout<<"Addition execute...\n";
        }
};

class Substract:public Strategy
{
    public:
        void Execute()
        {
            std::cout<<"Substraction execute...\n";
        }
};

class Calculator
{
    private:
        Strategy* strategy = nullptr;
    
    public:
        void setStrategy(Strategy* s)
        {
            strategy = s;
        }

        void Calulate()
        {
            strategy->Execute();
        }
};

int main()
{
    Calculator cobj;
    Add aobj;
    Substract sobj;

    cobj.setStrategy(&aobj);
    cobj.Calulate();


    return 0;
}