#include <iostream>

class Counter
{
private:
    int iCounter;
    Counter()
    {
        iCounter = 0;
    }

    Counter(const Counter &) = delete;
    Counter &operator=(const Counter &) = delete;

    Counter(const Counter &&) = delete;
    Counter &operator=(Counter &&) = delete;

public:
    static Counter &getInstance()
    {
        static Counter cobj;
        return cobj;
    }

    void increment()
    {
        iCounter++;
    }

    void decrement()
    {
        iCounter--;
    }

    void print()
    {
        std::cout << "COUNT : " << iCounter << std::endl;
    }
};

int main()
{
    Counter::getInstance().increment();
    Counter::getInstance().increment();
    Counter::getInstance().decrement();
    Counter::getInstance().print();

    return 0;
}