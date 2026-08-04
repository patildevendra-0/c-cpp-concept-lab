#include<iostream>
#include<memory>

enum class ShapeType
{
    Circle_,
    Rectangle_,
    Square_
};

class Tool
{
    public:
        virtual void CurrentTool() = 0;
};

class Square_:public Tool
{
    public:
        void CurrentTool() override
        {
            std::cout<<"Square_ ...\n";
        }
};

class Circle_:public Tool
{
    public:
        void CurrentTool()
        {
            std::cout<<"Circle_ ...\n";
        }
};

class Rectangle_:public Tool
{   
    public:    
        void CurrentTool()
        {
            std::cout<<"Rectangle_ ...\n";
        }
};

class Factory
{
    public:
        static std::unique_ptr<Tool> ActivateTool(ShapeType type)
        {   
            switch (type)
            {
                case ShapeType::Circle_:
                    return std::make_unique<Circle_>();
                
                case ShapeType::Rectangle_:
                    return std::make_unique<Rectangle_>();
                
                case ShapeType::Square_:
                    return std::make_unique<Square_>();
            
                default:
                    break;
            }
            return nullptr;
        }
};

int main()
{   
    auto obj = Factory::ActivateTool(ShapeType::Circle_);
    obj->CurrentTool();

    return 0;
}