#include <iostream>
#include <vector>
#include <algorithm>

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

    void unsuscribeToChannel(Subscriber *sub)
    {
        auto it = std::find(Subscribers.begin(), Subscribers.end(), sub);
        if(it!=Subscribers.end())
        {
            Subscribers.erase(it);
        }
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

    youtubeChannel.unsuscribeToChannel(&suresh);

    return 0;
}