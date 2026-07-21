
#include<iostream>

class Demo
{
    private:
        Demo() = default;
        Demo(const Demo&) = delete;
        Demo& operator=(const Demo&) = delete;
        
    
    public:
        static Demo& GetInstance()
        {
            static Demo dobj;
            return dobj;
        }

};

int main()
{

    return 0;
}