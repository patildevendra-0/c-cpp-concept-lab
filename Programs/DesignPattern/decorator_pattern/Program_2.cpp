// Shree Ganesh....

#include<iostream>

class Car
{   
    public:
        virtual void BookCar() = 0;
        virtual int cost() = 0;
};

class BaseVersion : public Car
{
    public:

        void BookCar() override
        {
            std::cout<<"Basic version car booked";
        }

        int cost() override
        {
            return 500000;
        } 
};

class CarDecorator : public Car
{
    public:
        Car* cobj;
        
        CarDecorator(Car* obj)
        {
            cobj = obj;
        }
};

class AdsSystem : public CarDecorator
{
    public:
        AdsSystem(Car* obj):CarDecorator(obj)
        {

        }

        void BookCar() override
        {
            cobj->BookCar();
            std::cout<<"+ ADS \n";
        }

        int cost() override
        {
            return cobj->cost() + 100000;
        }
};

int main()
{
    BaseVersion bobj;
    AdsSystem adobj(&bobj);

    adobj.BookCar();
    std::cout<<"COST OF CAR : "<<adobj.cost();
    return 0;
}