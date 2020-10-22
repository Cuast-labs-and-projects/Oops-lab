 
#include <iostream> 
using namespace std; 

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
    cout<<"call by address"<<endl;
	int a = 45, b = 35; 
	cout <<"Before Swap\n"; 
	cout <<"a = " << a << " b = " << b << "\n"; 

	swap(&a, &b); 
   
	cout <<"After Swap with pass by address\n"; 
	cout <<"a = " << a << " b = " << b << "\n"; 
    cout<<endl;

    cout<<"call by reference"<<endl;

    cout << "Before Swap\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
  
    swap(a, b); 
  
    cout << "After Swap with pass by reference\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 

    cout<<endl;

    cout<<"call by value"<<endl;

    cout << "Before Swap\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 
  
    swapv(a, b); 
  
    cout << "After Swap with pass by value\n"; 
    cout << "a = " << a << " b = " << b << "\n"; 

    cout<<endl;
} 
