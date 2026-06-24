#include <iostream>
#include <chrono>
#include <thread>

void DownloadFileFinished()
{
    std::cout << "File Download complete.....\n";
}

void DownloadFile(void (*callback)())
{
    std::cout << "File Downloading.....\n";
    std::this_thread::sleep_for(std::chrono::seconds(5));

    callback();
}

int main()
{
    DownloadFile(DownloadFileFinished);

    return 0;
}