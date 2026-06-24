#include <iostream>
#include <mutex>
#include <thread>

std::mutex mtx;
int iCount = 0;

void IncrementCount()
{

    std::lock_guard lock(mtx);

    for (int i = 0; i <= 100; i++)
    {
        iCount++;
    }

    std::cout << "COUNT : " << iCount << std::endl;
}

int main()
{
    std::thread t1(IncrementCount);
    std::thread t2(IncrementCount);

    t1.join();
    t2.join();

    return 0;
}