#include <iostream>

using namespace std;

class Employee
{
protected:
    string name;
    int emp_no, pay_rate;

public:
    Employee() {}
    Employee(string name, int emp_no)
    {
        this->name = name;
        this->emp_no = emp_no;
        this->pay_rate = 0;
    }
    virtual void pay()
    {
       
    }
};

class Manager : Employee
{
    bool is_salaried;

public:
    Manager(string name, int emp_no, bool is_salaried)
    {
        this->name = name;
        this->emp_no = emp_no;
        this->is_salaried = is_salaried;
        this->pay_rate = 0;
    }
    void display()
    {
        cout << "Manager details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Employee number: " << emp_no << endl;
        cout << "Pay rate: " << pay_rate;
        if (is_salaried)
        {
            cout << " monthly" << endl;
        }
        else
        {
            cout << " hourly" << endl;
        }
    }
    void pay(int salary)
    {
        if (is_salaried)
        {
            pay_rate = salary;
        }
        else
        {
            pay_rate = salary / (30 * 24); // hourly wage
        }
    }
};

class Supervisor : Employee
{
    string department;

public:
    Supervisor(string name, int emp_no, string department)
    {
        this->name = name;
        this->emp_no = emp_no;
        this->department = department;
        this->pay_rate = 0;
    }
    void display()
    {
        cout << "Supervisor details: " << endl;
        cout << "Department: " << department << endl;
        cout << "Name: " << name << endl;
        cout << "Employee number: " << emp_no << endl;
        cout << "Pay rate: " << pay_rate << " monthly" << endl;
    }
    void pay(int salary)
    {
        pay_rate = salary;
    }
};

int main()
{
    Manager m("ABC", 123, false);
    Supervisor s("ABD", 123, "Engineering");
    m.display();
    s.display();
    m.pay(720000);
    s.pay(720000);
    m.display();
    s.display();
    return 0;
}