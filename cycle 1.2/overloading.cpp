# include<iostream>
# include<cmath>
using namespace std;

void power(float a, float n)
{
    
    cout<<"float float  function"<<endl;
    cout<<pow(a,n)<<endl;
}
void power(double a,int n)
{   
    cout<<"double int function"<<endl;
    cout<<pow(a,n)<<endl;
}
void power(int a,int n)
{    
    cout<<"int int function"<<endl;
    cout<<pow(a,n)<<endl;
}
void power(double a,double n)
{    
    cout<<"double double function"<<endl;
    cout<<pow(a,n)<<endl;
}
void power(long a,int n)
{   
    cout<<"long int function"<<endl;
    cout<<pow(a,n)<<endl;
}






int main(){
  
  power(2.5,2);
  cout<<endl;

  power(2,2);
  cout<<endl;

  power(1.1f,2.3f);
  cout<<endl;
  
  power(10000000000,2);
  cout<<endl;

  power(.5,.5);
  cout<<endl;

  
  cout<<"endl";

}