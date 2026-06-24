#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex mtx;
int iCount = 0;

void IncrementCount()
{

    std::unique_lock lock(mtx);

    for (int i = 0; i <= 100; i++)
    {
        iCount++;
    }

    lock.unlock();
    std::cout << "Unlock : " << std::this_thread::get_id() << std::endl;

    std::this_thread::sleep_for(std::chrono::milliseconds(800));

    lock.lock();
    std::cout << "Lock : " << std::this_thread::get_id() << std::endl;

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