#include<iostream>

using namespace std;

class dist
{
private:
    int feet;
    float inches;
    
public:
    dist():feet(0),inches(0){}
    
    dist(int f, float in): feet(f),inches(in){}
    
    void getdist()
    {
        cout<<"feet=";cin>>feet;
        cout<<"inches=";cin>>inches;
    }
    
    friend bool operator <(dist d1, dist d2);

    dist operator+(dist &dist1)
    {
        dist tempD; //to add two dists
        tempD.inches = inches + dist1.inches;
        tempD.feet = feet + dist1.feet + (tempD.inches / 12);
        tempD.inches = int(tempD.inches) % 12;
        return tempD;
    }
    void dispDistance()
    {
        cout << "Feet:" << feet << "\t"
             << "Inches:" << inches << endl;
    }
};

bool operator <(dist d1,dist d2)
{

  float dd1=d1.feet+d1.inches/12;
  float dd2=d2.feet+d2.inches/12;
  return dd1<dd2?true:false;
}



int main()
{
  dist d1,d2,d3;
  cout<<"Enter the first dist"<<endl;
  d1.getdist();
  cout<<"Enter the first dist"<<endl;
  d2.getdist();
  if(d1<d2)
    cout<<"d1 is smaller than d2"<<endl;
  else
    cout<<"d2 is smaller than d1"<<endl;
  d3=d1+d2;
  cout<<"The sum of the distances is"<<endl;
  d3.dispDistance();

  
    return 0;
}