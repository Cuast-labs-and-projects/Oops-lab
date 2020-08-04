#include <iostream>
#include <math.h>

using namespace std;

class Triangle
{
private:
    float a;
    float b;
    float c;
    float area;

public:
    void setValues(float sideA, float sideB, float sideC)
    {
        a = sideA;
        b = sideB;
        c = sideC;
        float s = (a + b + c) / 2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }

    bool isValid()
    {
        bool isA = a < (b + c);
        bool isB = b < (a + c);
        bool isC = c < (b + a);
        return (isA && isB && isC);
    }

    void showArea()
    { 
        cout << "Area = " << area << endl;
    }
};

int main()
{
    Triangle ABC;
    float a, b, c;
    cout << "Enter sides of triangle a, b, c\n";
    cin >> a >> b >> c;
    ABC.setValues(a, b, c);
    if (ABC.isValid()) {
        cout << "Valid\n";
        ABC.showArea();
    }
    else {
        cout << "Invalid\n";
    }

    return 0;
}