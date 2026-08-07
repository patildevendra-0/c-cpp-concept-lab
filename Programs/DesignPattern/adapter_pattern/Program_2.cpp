#include <iostream>

class LegacyPrinter
{
public:
    void startPrinting()
    {
        std::cout << "PRINTING START....\n";
    }
};

class Printer
{
public:
    virtual void print() = 0;
};

class printerAdapter : public Printer
{
public:
    LegacyPrinter *lobj;

    printerAdapter(LegacyPrinter *obj)
    {
        lobj = obj;
    }

    void print() override
    {
        lobj->startPrinting();
    }
};

int main()
{
    LegacyPrinter obj;
    printerAdapter pobj(&obj);

    pobj.print();

    return 0;
}