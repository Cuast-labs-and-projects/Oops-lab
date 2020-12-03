#include <iostream>

using namespace std;

template <class T >
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int *ptr=nullptr;


int main()
{  i think i will be able to code very much better now this is awsome manh
    int a = 3, b = 5;
    cout << a << b;
    Swap(a, b);
    cout << a << b;
    char c1 = 'a', c2 = 'b';
    cout << c1 << c2;
    Swap(c1, c2);
    Swap<double>(1.4, 2.5);
    cout << c1 << c2;
    return 0;
}