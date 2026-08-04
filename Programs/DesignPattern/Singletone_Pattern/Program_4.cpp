#include <iostream>

class Logger
{
private:
    Logger() = default;

    Logger(const Logger &) = delete;
    Logger &operator=(const Logger &) = delete;

    Logger(Logger &&) = delete;
    Logger &operator=(Logger &&) = delete;

public:
    static Logger &getInstance()
    {
        static Logger lobj;
        return lobj;
    }

    static void log(std::string data)
    {
        std::cout << data << std::endl;
    }
};

int main()
{
    Logger::getInstance().log("Application started...\n");

    return 0;
}