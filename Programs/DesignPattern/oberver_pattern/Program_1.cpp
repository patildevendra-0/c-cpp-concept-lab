#include<iostream>
#include<vector>

class Student
{
    public:
        virtual void update() = 0;
};

class Rohit:public Student
{
    public:
        void update()
        {
            std::cout<<"Rohit  : result recieved...\n";
        }
};

class Deep:public Student
{
    public:
        void update()
        {
            std::cout<<"Deep  : result recieved...\n";
        }
};


class Teacher
{
    private:
        std::vector<Student*> Students;

    public:

        void attach(Student* Student)
        {
            Students.push_back(Student);
        }

        void notifyAll()
        {
            for(Student* Student :Students)
            {
                Student->update();
            }
        }
};

int main()
{
    Teacher teacher;
    Rohit rohit;
    Deep deep;

    teacher.attach(&rohit);
    teacher.attach(&deep);
    
    teacher.notifyAll();

    return 0;
}