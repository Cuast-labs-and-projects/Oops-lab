#include <iostream>
#include <math.h>

using namespace std;



class complex
{

private:
    int money;

public:
    complex(){};
    complex(int);
    ~complex();
    void show();
    int getdata()
    {
        return money;
    }
};

complex::complex(int a)
{
    this->money = a;
}

complex::~complex()
{
}
void complex::show()
{

    cout << money << endl;
}



int main()
{
    complex d(2);
        
    return 0;
}