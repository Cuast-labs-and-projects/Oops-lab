#include <iostream>

#define MAXSZ 10

using namespace std;

class UG
{
public:
    int no;
    string name;
    int m1, m2, m3, total_marks, rank;

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

public:
    double ug_cgpa;
    int cert_total;

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
int total(UG a)
{
    return a.m1 + a.m2 + a.m3;
}

int total(PG b)
{
    if (b.cert_total > 0)
    {
        return b.m1 + b.m2 + b.m3 + 10;
    }
    else
    {
        return b.m1 + b.m2 + b.m3;
    }
}
void swap(UG *xp, UG *yp)
{
    UG temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int n, UG *arr)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[i].total_marks > arr[i + 1].total_marks)
                swap(&arr[i], &arr[i + 1]);

    for (i = 0; i <= n - 1; i++)
    {
        arr[i].rank = i + 1;
    }
}
void swap(PG *xp, PG *yp)
{
    PG temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int n, PG *arr)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[i].total_marks > arr[i + 1].total_marks)
                swap(&arr[i], &arr[i + 1]);

    for (i = 0; i <= n - 1; i++)
    {
        arr[i].rank = i + 1;
    }
}
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
                ug[i].total_marks = total(ug[i]);
            }
            bubbleSort(n , ug);
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
                pg[i].getvalues();
                pg[i].total_marks = total(pg[i]);
            }
            bubbleSort(n , pg);
            cout << "The details of students sorted according to Marks : \n";
            for (int i = n - 1; i >= 0; --i)
            {
                pg[i].display_all();
            }

            break;
        default:
            cout << "Invalid entry!!! Retry.";
        }
    }
    return 0;
}
