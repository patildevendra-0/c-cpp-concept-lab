#include <iostream>

class PrinterManager
{
private:
    int iTotalJobs;

    PrinterManager()
    {
        iTotalJobs = 0;
    }

    PrinterManager(const PrinterManager &) = delete;
    PrinterManager &operator=(const PrinterManager &) = delete;

    PrinterManager(PrinterManager &&) = delete;
    PrinterManager &operator=(PrinterManager &&) = delete;

public:
    static PrinterManager &getInstance()
    {
        static PrinterManager pobj;
        return pobj;
    }

    void addJob()
    {
        iTotalJobs++;
    }

    void removeJob()
    {
        iTotalJobs--;
    }

    void showJobs()
    {
        std::cout << "TOTAL JOBS : " << iTotalJobs << std::endl;
    }
};

int main()
{
    PrinterManager::getInstance().addJob();
    PrinterManager::getInstance().addJob();
    PrinterManager::getInstance().showJobs();

    PrinterManager::getInstance().removeJob();
    PrinterManager::getInstance().showJobs();

    return 0;
}