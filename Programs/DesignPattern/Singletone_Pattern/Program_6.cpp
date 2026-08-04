#include <iostream>

class configManager
{
private:
    std::string appName;
    int iPort;

private:
    configManager() = default;

    configManager(const configManager &) = delete;
    configManager &operator=(const configManager &) = delete;

    configManager(const configManager &&) = delete;
    configManager &operator=(configManager &&) = delete;

public:
    static configManager &getInstance()
    {
        static configManager cmObj;
        return cmObj;
    }

    void setAppName(std::string name)
    {
        appName = name;
    }

    std::string getAppName()
    {
        return appName;
    }

    void setPort(int port)
    {
        iPort = port;
    }

    int getPort()
    {
        return iPort;
    }
};

int main()
{
    configManager::getInstance().setAppName("Demo");
    configManager::getInstance().setPort(8000);

    std::string appname = configManager::getInstance().getAppName();
    int port = configManager::getInstance().getPort();

    std::cout << "APPNAME : " << appname << std::endl;
    std::cout << "PORT : " << port << std::endl;

    return 0;
}