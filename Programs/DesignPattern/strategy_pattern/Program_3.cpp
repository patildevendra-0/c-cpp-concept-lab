#include<iostream>

class Mode
{
    public:
        virtual void ActivateMode() = 0;
};

class PhotoMode:public Mode
{
    public:
        void ActivateMode()
        {
            std::cout<<"Photo mode activated...\n";
        }
};

class VideoMode:public Mode
{
    public:
        void ActivateMode()
        {
            std::cout<<"Video mode activated..\n";
        }
};

class Camera
{   
    private:
        Mode* mode = nullptr;

    public:
        void setMode(Mode* m)
        {
            mode = m;
        }   
        
        void Active()
        {
            mode->ActivateMode();
        }
};

int main()
{
    Camera cobj;
    PhotoMode pobj;
    VideoMode vobj;

    cobj.setMode(&pobj);
    cobj.Active();

    return 0;
}