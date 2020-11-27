#include <iostream>
#include <math.h>

using namespace std;

class Distance
{
    double feet, inch;

public:
    Distance(float t){
        feet = floor(t / 0.3048);
        t -= feet * 0.3048;
        inch = floor(t / 0.0254);
    }
    Distance(){}
    
    void showdistance(){
        cout<<"distance in feet  "<<feet<<endl;
        cout<<"distance in inches"<<inch<<endl;
    }
    void getdistance()
    {
        cout << "\n Enter Feet: ";
        cin >> feet;
        cout << "\n Enter Inch: ";
        cin >> inch;
    }
    operator float()
    {
        return (((feet * 12 + inch) * 2.54) / 100);
    }
};

int main()
{
    Distance D1;
    D1.getdistance();
    double meter = D1;
    cout << "\n Convertion of Feet and inch distance to Meter: " << meter << "m"<<endl;
    cout<<"enter distance in meter"<<endl;
    cin>>meter;
    Distance D2=meter;
    D2.showdistance();
    return 0;
}