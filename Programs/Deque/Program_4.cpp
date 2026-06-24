#include <iostream>
#include <deque>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

std::deque<int> DATA;
std::mutex mtx;
std::condition_variable cv;
const int windows_size = 4;

void Producer()
{
    int iCount = 0;

    while (true)
    {
        {
            std::lock_guard<std::mutex> lock(mtx);
            DATA.push_back(iCount++);
            if (DATA.size() > windows_size)
            {
                DATA.pop_front();
            }
            std::cout << "DATA PUSHED..." << std::endl;
        }
        cv.notify_one();
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }
}

void Consumer()
{
    while (true)
    {
        std::unique_lock<std::mutex> lock(mtx);
        cv.wait(lock,[]{
            return !DATA.empty();
        });

        for (int i : DATA)
        {
            std::cout << i << "\t";
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::thread t1(Producer);
    std::thread t2(Consumer);

    t1.join();
    t2.join();

    return 0;
}