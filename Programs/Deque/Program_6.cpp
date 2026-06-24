#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;
int iCount = 0;

void IncrementTheValue()
{
    mtx.lock();

    for (int i = 0; i <= 100; i++)
    {
        iCount++;
    }

    std::cout << "ICONT : " << iCount << std::endl;
    mtx.unlock();
    
}

int main()
{
    std::thread t1(IncrementTheValue);
    std::thread t2(IncrementTheValue);

    t1.join();
    t2.join();

    return 0;
}