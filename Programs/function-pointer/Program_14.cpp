#include <iostream>

void Execute(void (*callback)())
{
    callback();
}

int main()
{
    Execute(
        []()
        {
            std::cout << "AFTER EXECUTE .....\n";
        });

    return 0;
}