
#include<iostream>

#define SAL1 75000
#define SAL2 2000
#define MAXSZ 10
using namespace std;

class Employee
{
    protected:
        long empno;
        double payrate;
        string name;

    public:
        Employee()
        {
            empno = 0000;
            payrate = 0;
            name = "NONE";
        }

        void pay();
};

class Manager: public Employee
{
    protected:
        bool issalaried;
        float bas, da, conv, med, ot;

    public:
        Manager() : Employee()
        {
            issalaried = true;
        }

        void getval()
        {
            static int i = 1;
            cout << "\n\nEnter name of the Manager #"<<i<<" :: ";
            cin >> name;
            cout << "Enter Employee Number :: ";
            cin >> empno;
            cout << "Are you salaried? (yes or no) :: ";
            string x;
            cin >> x;
            if( x == "yes" )
                issalaried = true;
            else issalaried = false;

            ++i;
        }

        void pay()
        {
            if( issalaried == true )
            {
                if( issalaried == true )
                {
                    cout << "Basic :: ";
                    cin >> bas;
                    cout << "DA :: ";
                    cin >> da;
                    cout << "Conveyance :: ";
                    cin >> conv;
                    cout << "Overtime :: ";
                    cin >> ot;
                    payrate = bas + da + conv + ot;
                }        
            }
            if( issalaried == false)
            {
                int x;
                cout << "How many hours has this employee worked ? " << endl;
                cin >> x;
                payrate = x*SAL2;
            }
        }

        void display()
        {
            cout << "Name :: " << name << endl
                 << "Payrate :: " << payrate << endl;
        }
};

class Supervisor: public Employee
{
    protected:
        string department;
        float bas, da, conv, med, ot;
    public:
        Supervisor() : Employee()
        {
            department = "NONE";
        }

        void getval()
        {
            static int i = 1;
            cout << "\n\nEnter name of the Supervisor#"<<i<<" :: ";
            cin >> name;
            cout << "Enter Employee Number :: ";
            cin >> empno;
            cout << "Enter department name :: ";
            cin >> department;
            ++i;
        }

        void pay()
        {
            cout << "Basic :: ";
            cin >> bas;
            cout << "DA :: ";
            cin >> da;
            cout << "Conveyance :: ";
            cin >> conv;
            cout << "Overtime :: ";
            cin >> ot;
            payrate = bas + da + conv + ot;
        }

        void display()
        {
            cout << "Name :: " << name << endl
                 << "Payrate :: " << payrate << endl;
        }
};

int main()
{
    Supervisor S[MAXSZ];
    Manager M[MAXSZ];
    int x,n;

    while(1)
    {
        cout << "You're gonna enter data of :: \n"
             << "1. Manager \n"
             << "2. Supervisor \n"
             << "Or Enter 0 to exit \n"
             << "Enter your choice :: ";
        cin >> x;
        switch(x)
        {
            case 0:
                cout << "Okay, exiting...\n\n";
                exit(0);

            case 1:
                cout << "Enter no.of entries :: ";
                cin >> n;
                for (int i = 0; i < n; i++)
                {  
                  M[i].getval();
                  M[i].Manager::pay();  
                }
                cout << "Managers and their payrates :: \n";
                for (int i = 0; i < n; i++)
                {   
                  M[i].display();
                  cout << endl;   
                }
                break;
            
            case 2:
                cout << "Enter no.of entries :: ";
                cin >> n;
                for (int i = 0; i < n; i++)
                { 
                  S[i].getval();
                  S[i].Supervisor::pay();  
                }
                cout << "Managers and their payrates :: \n";
                for (int i = 0; i < n; i++)
                {   
                  S[i].display();
                  cout << endl;   
                }
                break;
            
            default: 
                cout << "Invalid entry!!! Retry. \n\n";
        }
    }
    return 0;
}