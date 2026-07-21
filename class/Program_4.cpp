#include<iostream>

class Demo
{
    private:
        Demo()
        {

        }

    public:
        static void CreateInstance()
        {
            Demo dobj;
        }    
};

int main()
{
    Demo::CreateInstance();

    return 0;
}