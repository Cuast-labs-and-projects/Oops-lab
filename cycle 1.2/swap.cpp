 
#include <iostream> 
using namespace std; 

class swapper{
    public:
      int a;
      int b;
    void getdata();

};
void swapper::getdata(){
    cout<<"enter the first number"<<endl;
    cin>>this->a;
    cout<<"enter the second number"<<endl;
    cin>>this->b;
}

void swap(int* x, int* y) 
{ 
	int z = *x; 
	*x = *y; 
	*y = z; 
}
void swap(int& x, int& y) 
{ 
    int z = x; 
    x = y; 
    y = z; 
} 

void swapv(int x,int y)
{  
    int z = x; 
    x = y; 
    y = z; 

}

int main() 
{   
    swapper obj;
    obj.getdata();
    cout<<"call by address"<<endl;
	cout <<"Before Swap\n"; 
	cout <<"a = " << obj.a << " b = " << obj.b << "\n"; 

	swap(&obj.a, &obj.b); 
   
	cout <<"After Swap with pass by address\n"; 
	cout <<"a = " <<  obj.a<< " b = " << obj.b << "\n"; 
    cout<<endl;

    cout<<"call by reference"<<endl;

    cout << "Before Swap\n"; 
    cout << "a = " << obj.a << " b = " << obj.b << "\n"; 
  
    swap(obj.a, obj.b); 
  
    cout << "After Swap with pass by reference\n"; 
    cout << "a = " << obj.a << " b = " << obj.b << "\n"; 

    cout<<endl;

    cout<<"call by value"<<endl;

    cout << "Before Swap\n"; 
    cout << "a = " << obj.a << " b = " << obj.b << "\n"; 
  
    swapv(obj.a, obj.b); 
  
    cout << "After Swap with pass by value\n"; 
    cout << "a = " << obj.a << " b = " << obj.b << "\n"; 

    cout<<endl;
} 
