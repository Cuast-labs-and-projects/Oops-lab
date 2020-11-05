#include <iostream>
#include <math.h>

using namespace std;

void power(double n, int p)
{
    cout << "\n In double function:";
    cout << "\n " << n << " to the power " << p << " = " << pow(n, p);
}

void power(char n, int p)
{
    cout << "\n In char function:";
    cout << "\n " << n << " to the power " << p << " = " << pow(n,p);
}
void power(long n, int p)
{
    cout << "\n In long function:";
    cout << "\n " << n << " to the power " << p << " = " << pow(n, p);
}
void power(float n, int p)
{
    cout << "\n In float function:";
    cout << "\n " << n << " to the power " << p << " = " << pow(n, p);
}
void power(int n, int p)
{
    cout << "\n In int function:";
    cout << "\n " << n << " to the power " << p << " = " << pow(n, p);
}

int main()
{   
    int ans;
    do{
    int choice, p;
    cout << "\n What value are you entering?";
    cout << "\n 1. Double";
    cout << "\n 2. Char";
    cout << "\n 3. Int";
    cout << "\n 4. Long";
    cout << "\n 5. Float";
    cout << "\n Enter your choice";
    cin >> choice;
    switch (choice)
    {
    case 1:
        double doubleN;
        cout << "\n Enter the value of n: ";
        cin >> doubleN;
        cout << "\n Enter the value of p: ";
        cin >> p;
        power(doubleN, p);
        break;
    case 2:
        char charN;
        cout << "\n Enter the value of n: ";
        cin >> charN;
        cout << "\n Enter the value of p: ";
        cin >> p;
        power(charN, p);
        break;
    case 3:
        int intN;
        cout << "\n Enter the value of n: ";
        cin >> intN;
        cout << "\n Enter the value of p: ";
        cin >> p;
        power(intN, p);
        break;
    case 4:
        long longN;
        cout << "\n Enter the value of n: ";
        cin >> longN;
        cout << "\n Enter the value of p: ";
        cin >> p;
        power(long(longN), p);
        break;
    case 5:
        float floatN;
        cout << "\n Enter the value of n: ";
        cin >> floatN;
        cout << "\n Enter the value of p: ";
        cin >> p;
        power(float(floatN), p);
        break;
    }
    cout<<endl;
    cout<<" do you want to continue(0/1)"<<endl;
    cin>>ans;
    }
    while(ans);
    return 0;
}