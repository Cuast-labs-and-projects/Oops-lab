#include <iostream>
using namespace std;

struct phone {
    int area;
    int exchange;
    int num;
};

    string ph_to_string(phone n) {
    string phone_number = "(" + to_string(n.area) + ") " + to_string(n.exchange) + "-" + to_string(n.num) + "\n";
    return phone_number;
}

int main() {
    phone first, second;
    first.exchange = 767;
    first.area = 212;
    first.num = 8900;
    cout << "Enter your area code, exchange, and number: ";
    cin >>  second.area >> second.exchange >> second.num;
    cout << "initialized number is" << ph_to_string(first);
    cout << "The entered no is is " << ph_to_string(second);
    return 0;
}