// sliding window

#include <iostream>
#include <deque>
#include <thread>
#include <chrono>
#include <mutex>

std::deque<int> Windows;
const int window_size = 4;
std::mutex mtx;

void Producer()
{
    int iCounter = 0;

    while (true)
    {
        {
            std::lock_guard<std::mutex> lock(mtx);

            Windows.push_back(iCounter++);
            if (Windows.size() > window_size)
            {
                Windows.pop_front();
            }
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

void Consumer()
{
    while (true)
    {
        {
            std::lock_guard<std::mutex> lock(mtx);

            for (int i : Windows)
            {
                std::cout << i << "\t";
            }
            std::cout << "\n";
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
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