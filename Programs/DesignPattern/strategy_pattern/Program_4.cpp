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

//---------------------------------------------------------------------------------------//

class Focus
{
    public:
        virtual void ActivateFocus() = 0;
};

class AutoFocus:public Focus
{
    public:
        void ActivateFocus()
        {
            std::cout<<"Auto Focus activated....\n";
        }
};

class ManualFocus:public Focus
{
    public:
        void ActivateFocus()
        {
            std::cout<<"Manul Focus activated...\n";
        }
};

class Camera
{   
    private:
        Mode* mode = nullptr;
        Focus* focus = nullptr;

    public:
        void setMode(Mode* m)
        {
            mode = m;
        }   
        
        void Active()
        {
            mode->ActivateMode();
        }

        void setFocus(Focus* f)
        {
            focus = f;
        }

        void ActiveF()
        {
            focus->ActivateFocus();
        }
};

int main()
{
    Camera cobj;
    PhotoMode pobj;
    VideoMode vobj;
    AutoFocus afobj;

    cobj.setMode(&pobj);
    cobj.Active();

    cobj.setFocus(&afobj);
    cobj.ActiveF();

    return 0;
}