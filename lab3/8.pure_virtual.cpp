#include <iostream>
#include <math.h>
#define PI 3.14159265359

using namespace std;

class Shape
{
public:
    virtual void findArea() = 0;
};

class Triangle : public Shape
{
    double a, b, c;

public:
    int inspect()
    {
        if (a == 0 || b == 0 || c == 0)
        {
            cout << "Triangle with the given sides is not possible to create(Length of a side cannot be 0)." << endl;
            return 0;
        }
        else
        {
            //To check if a triangle is valid, the some of two sides should be greater than the third side
            if ((a + b > c) && (a + c > b) && (b + c > a))
            {
                cout << "Its a valid triangle" << endl;
                return 1;
            }
            else
            {
                cout << "This is not a valid triangle" << endl;
                return 0;
            }
        }
    }

    void findArea()
    {
        cout << "Enter the three sides of triangle: ";
        cin >> a >> b >> c;
        int validate = this->inspect();
        if (!validate)
        {
            exit(0);
        }
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "\nArea of the triangle: " << area << endl;

        cout << "Perimeter of the triangle is: " << (a + b + c) << endl;

        cout << "\n---------------------\n";
    }
};

class Rectangle : public Shape
{
    double l, b;

public:
    int validate()
    {
        if (l == 0 || b == 0)
        {
            cout << "The length cannot be 0" << endl;
            return 0;
        }
        else
        {
            cout << "Valid Reactangle" << endl;
            return 1;
        }
    }
    void findArea()
    {
        cout << "Enter the length and bredth of a rectangle: ";
        cin >> b >> l;
        int legit = this->validate();
        if (!legit)
        {
            exit(0);
        }
        double area = l * b;
        cout << "\nArea of the rectangle: " << area << endl;
        cout << "Perimeter of the rectangle is: " << (2 * (l + b)) << endl;
        cout << "\n---------------------\n";
    }
};

class Circle : public Shape
{
    double r;

public:
    int validate()
    {
        if (r == 0)
        {
            cout << "The length cannot be 0" << endl;
            return 0;
        }
        else
        {
            cout << "Valid Circle" << endl;
            return 1;
        }
    }
    void findArea()
    {
        cout << "Enter the radius of the circle: ";
        cin >> r;
        int legit = this->validate();
        if (!legit)
        {
            exit(0);
        }
        double area = PI * r * r;
        cout << "\nArea of the triangle: " << area << endl;
        cout << "Perimeter of the circle is: " << (2 * PI * r) << endl;
        cout << "\n---------------------\n";
    }
};

class Square : public Shape
{
    double a;

public:
    int validate()
    {
        if (a == 0)
        {
            cout << "The length cannot be 0" << endl;
            return 0;
        }
        else
        {
            cout << "Valid Square" << endl;
            return 1;
        }
    }
    void findArea()
    {
        cout << "Enter the side of the square: ";
        cin >> a;
        int legit = this->validate();
        if (!legit)
        {
            exit(0);
        }
        double area = a * a;
        cout << "\nArea of the Square: " << area << endl;
        cout << "Perimeter of the square is: " << (4 * a) << endl;
        cout << "\n---------------------\n";
    }
};

int main()
{
    Shape *ptr;
    Triangle T;
    Rectangle R;
    Circle C;
    Square S;

    ptr = &T;
    ptr->findArea();
    ptr = &R;
    ptr->findArea();
    ptr = &C;
    ptr->findArea();
    ptr = &S;
    ptr->findArea();

    return 0;
}