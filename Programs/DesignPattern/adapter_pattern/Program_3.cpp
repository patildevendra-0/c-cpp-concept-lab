#include <iostream>

class LegacyPlayer
{
public:
    void startMusic()
    {
        std::cout << "Music start...\n";
    }
};

class Newplayer
{
public:
    virtual void play() = 0;
};

class PlayerAdapter : public Newplayer
{
public:
    LegacyPlayer *lobj;

    PlayerAdapter(LegacyPlayer *obj)
    {
        lobj = obj;
    }

    void play() override
    {
        lobj->startMusic();
    }
};

int main()
{
    LegacyPlayer obj;

    PlayerAdapter pobj(&obj);

    pobj.play();

    return 0;
}