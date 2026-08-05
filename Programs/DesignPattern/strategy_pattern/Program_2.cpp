#include<iostream>

class PaymentStrategy
{
    public:
        virtual void Execute() = 0;
};

class GooglePay:public PaymentStrategy
{
    public:
        void Execute()
        {
            std::cout<<"USER DONE PAYMENT USING GOOGLE PAY...\n";
        }
};

class PhonePay:public PaymentStrategy
{
    public:
        void Execute()
        {
            std::cout<<"USER DONE PAYMENT USING PHONE PAY...\n";
        }
};

class BharatPay:public PaymentStrategy
{
    public:
        void Execute()
        {
            std::cout<<"USER DONE PAYMENT USING BHARAT PAY...\n";
        }
};


class Pay
{
    private:
        PaymentStrategy* strategy = nullptr;

    public:
        void setPaymentMethod(PaymentStrategy* p)
        {
            strategy = p;
        }    

        void makePayment()
        {
            strategy->Execute();
        }
};

int main()
{
    Pay payobj;
    BharatPay bobj;
    PhonePay phoneobj;
    GooglePay gobj;

    payobj.setPaymentMethod(&gobj);
    payobj.makePayment();


    return 0;
}