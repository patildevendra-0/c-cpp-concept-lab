#include <iostream>
#include <shared_mutex>
#include <thread>
#include <mutex>
#include <condition_variable>

std::shared_mutex smtx;
int iData = 11;
std::condition_variable_any cv;

void Reader()
{
    while (true)
    {
        {
            std::shared_lock lock(smtx);
            cv.wait(lock);
            std::cout << "DATA : " << iData << std::endl;
        }
    }
}

void Writer()
{
    while (true)
    {
        {
            std::unique_lock lock(smtx);
            iData++;
        }
        cv.notify_all();
        std::this_thread::sleep_for(std::chrono::milliseconds(800));
    }
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