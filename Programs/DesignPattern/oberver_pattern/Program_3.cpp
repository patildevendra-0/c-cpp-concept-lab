#include <iostream>
#include <vector>
class Subscriber
{
public:
    virtual void update(std::string message) = 0;
};

class Dinesh : public Subscriber
{
public:
    void update(std::string message)
    {
        std::cout << "Dinesh rec : " << message << std::endl;
    }
};

class Suresh : public Subscriber
{
public:
    void update(std::string message)
    {
        std::cout << "Suresh rec : " << message << std::endl;
    }
};

class YoutubeChannel
{
private:
    std::vector<Subscriber *> Subscribers;

public:
    void suscribeToChannel(Subscriber *subscriber)
    {
        Subscribers.push_back(subscriber);
    }

    void notifyAllSubscriber(std::string message)
    {
        for (Subscriber *subscriber : Subscribers)
        {
            subscriber->update(message);
        }
    }
};

int main()
{

    YoutubeChannel youtubeChannel;
    Suresh suresh;
    Dinesh dinesh;

    youtubeChannel.suscribeToChannel(&suresh);
    youtubeChannel.suscribeToChannel(&dinesh);

    youtubeChannel.notifyAllSubscriber("NEW VIDEO...\n");

    return 0;
}