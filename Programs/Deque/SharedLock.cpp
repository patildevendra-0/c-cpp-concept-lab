#include <iostream>
#include <shared_mutex>
#include <thread>
#include <mutex>

std::shared_mutex smtx;
int iData = 11;

void Reader()
{
    std::shared_lock lock(smtx);
    std::cout << "DATA : " << iData << std::endl;
}

void Writer()
{
    std::unique_lock lock(smtx);
    iData++;
}

int main()
{
    std::thread t1(Reader);
    std::thread t2(Reader);

    std::thread t3(Writer);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}