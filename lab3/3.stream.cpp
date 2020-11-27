#include <iostream>

using namespace std;

class Complex
{
    float real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    friend ostream &operator<<(ostream &, Complex &);
    friend istream &operator>>(istream &, Complex &);
};

ostream &operator<<(ostream &output, Complex &temp)
{
    output << "\n Entered Complex Number: \n"
           << temp.real << " + i" << temp.img;
    return output;
}
istream &operator>>(istream &input, Complex &temp)
{
    cout << "\n Enter the real part: ";
    input >> temp.real;
    cout << "\n Enter the imaginary part: ";
    input >> temp.img;
    return input;
}

int main()
{
    Complex C;
    cin >> C;
    cout << C;
    return 0;
}