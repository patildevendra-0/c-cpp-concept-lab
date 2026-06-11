#include <iostream>
#include <atomic>
#include <thread>
using namespace std;

constexpr int SIZE = 8;
int Buffer[SIZE];

std::atomic<int> head = 0;
std::atomic<int> tail = 0;

void Producer()
{
    for (int i = 0; i <= 10; i++)
    {
        int Current_head = head.load(std::memory_order_relaxed);
        
        int next_head = (Current_head + 1) % SIZE;
        while (next_head == tail.load(std::memory_order_acquire))
        {
           
        }
        Buffer[Current_head] = i;
        head.store(next_head, std::memory_order_release);

        std::cout << "Produced: " << i << std::endl;
    }
}

void Consumer()
{
    for (int i = 0; i <= 10; i++)
    {
        int Current_tail = tail.load(std::memory_order_relaxed);
        while (Current_tail == head.load(std::memory_order_acquire))
        {
            // wait
        }
        int value = Buffer[Current_tail];
        int next_tail = (Current_tail +1) % SIZE;

        tail.store(next_tail,std::memory_order_release);
        std::cout << "Consumed: " << value << std::endl;

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