#include<iostream>

class oldSdk
{
    public:
        void takephoto()
        {
            std::cout<<"Photo is taken....\n";
        }
};

class Camera
{
    public:
        virtual void capture() = 0;
};

class CameraAdaptor : public Camera
{
    public:
        oldSdk* sdk;

        CameraAdaptor(oldSdk* obj)
        {
            sdk = obj;
        }   

        void capture() override
        {
            sdk->takephoto();
        }
};

int main()
{
    oldSdk obj;
    CameraAdaptor cobj(&obj);

    cobj.capture();


    return 0;
}