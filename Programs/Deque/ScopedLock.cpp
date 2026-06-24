#include <iostream>
#include <mutex>
#include <thread>
#include <chrono>

std::mutex m1;
std::mutex m2;

void Worker()
{
    std::scoped_lock lock(m1, m2);
    std::cout << "Both mutex locked safely\n";
}

int main()
{

    std::thread t1(Worker);
    std::thread t2(Worker);

    t1.join();
    t2.join();

    return 0;
}