#include <iostream>

#define MAXSZ 10

using namespace std;

class UG
{
protected:
    int no;
    string name;
    int m1, m2, m3, total_marks, rank;

public:
    void total()
    {
        total_marks = m1 + m2 + m3;
    }
    void getval()
    {
        cout << "No : ";
        cin >> no;
        cout << "Name : ";
        cin >> name;
        cout << "mark1 : ";
        cin >> m1;
        cout << "mark2 : ";
        cin >> m2;
        cout << "mark3 : ";
        cin >> m3;
        cout << "rank : ";
        cin >> rank;
    }

    void display()
    {
        cout << "No : " << no << endl;
        cout << "Name : " << name << endl;
        cout << "Mark1 : " << m1 << endl;
        cout << "Mark2 : " << m2 << endl;
        cout << "Mark3 : " << m3 << endl;
        cout << "Rank : " << rank << endl;
        cout << "Total : " << total_marks << endl;
    }
};

class PG : public UG
{
    double ug_cgpa;
    int cert_total;

public:
    void total()
    {
        int total_marks = m1 + m2 + m3;
        if (cert_total > 0)
        {
            total_marks += 10;
        }
    }
    void getvalues()
    {
        getval();
        cout << "UG CGPA: ";
        cin >> ug_cgpa;
        cout << "cert_total : ";
        cin >> cert_total;
    }

    void display_all()
    {
        display();

        cout << "UG cgpa : " << ug_cgpa << endl;
        cout << "Cert total : " << cert_total << endl;
    }
};

int main()
{
    UG ug[MAXSZ];
    PG pg[MAXSZ];
    int n, x;

    while (1)
    {
        cout << "Choose Programme : \n";
        cout << "1. UG \n";
        cout << "2. PG \n";
        cout << "Enter 0 to EXIT \n";
        cout << "Your Choice : ";
        cin >> x;

        switch (x)
        {
        case 0:
            cout << "Exiting...";
            exit(0);

        case 1:
            cout << "Enter number of Students enrolled in the UG programme ( <10 ) : ";
            cin >> n;
            cout << "Enter data of " << n << " student(s)";
            for (int i = 0; i < n; ++i)
            {
                cout << "Student #" << i + 1 << endl;
                ug[i].getval();
                ug[i].total();
            }
       
            cout << "The details of students sorted according to Marks : \n";
            for (int i = n - 1; i >= 0; --i)
            {
                ug[i].display();
            }
            

            break;
        case 2:
            cout << "Enter number of Students enrolled in the PG programme ( <10 ) : ";
            cin >> n;
            cout << "Enter data of " << n << " student(s)\n";
            for (int i = 0; i < n; ++i)
            {
                cout << "Student #" << i + 1 << endl;
                pg[i].getval();
                pg[i].total();
            }

            cout << "The details of students sorted according to Marks : \n";
            for (int i = n - 1; i >= 0; --i)
            {
                pg[i].display();
            }

            break;
        default:
            cout << "Invalid entry!!! Retry.";
        }
    }
    return 0;
}
