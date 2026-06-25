#include <iostream>
#include <functional>

int main()
{
    std::function<int(int, int)> fn;

    fn = [](int a, int b)
    {
        return a + b;
    };

    std::cout << "fn : " << fn(10, 20) << std::endl;

    return 0;
}