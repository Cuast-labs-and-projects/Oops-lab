#include<iostream>


#define MAXSZ 10

using namespace std;

class STUDENT
{
    protected:
        int age;
        long regno;
        string name;
    public:
        STUDENT()
        {
            age = 0;
            regno = 0;
            name = "Not Entered";
        }
        virtual void sort(int n)=0;
};

class MTech_stud: public STUDENT
{
    protected:
        float gpa;
    public:
        MTech_stud(): STUDENT()
        {
            gpa = 0.0;
        }

        void getval()
        {
            cout << "Name : ";
            cin >> name;
            cout <<"Age : ";
            cin >> age;
            cout << "Registration Number : ";
            cin >> regno;
            cout << "GPA : ";
            cin >> gpa;
        }

        void sort(int n)
        {
            for (int i = 0; i < n - 1; ++i) 
            {
                 for (int j = 0; j < n - i - 1; ++j)
                {
                    if (this[i].gpa > this[i + 1].gpa) 
                    {
                        MTech_stud temp = this[i];
                        this[i] = this[i + 1];
                        this[i + 1] = temp;
                    }
                    if(this[i].gpa == this[i+1].gpa)
                    {
                        if((this[i].name.compare(this[i+1].name)) < 0)
                            {
                                MTech_stud temp = this[i];
                                this[i] = this[i + 1];
                                this[i + 1] = temp;
                            } 
                    }
                }
            }
        }

        void display()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Reg No. : " << regno << endl;
            cout << "GPA : " << gpa << endl << endl;
        }
};

class BTech_stud: public STUDENT
{
    protected:
        float mks;
    public:
        BTech_stud(): STUDENT()
        {
            mks = 0.0;
        }

        void getval()
        {
            cout << "Name :: ";
            cin >> name;
            cout <<"Age :: ";
            cin >> age;
            cout << "Registration Number :: ";
            cin >> regno;
            cout << "Marks :: ";
            cin >> mks;
        }

        void sort(int n)
        {
            for (int i = 0; i < n - 1; ++i) 
            {
                 for (int j = 0; j < n - i - 1; ++j)
                {
                    if (this[i].mks > this[i + 1].mks) 
                    {
                        BTech_stud temp = this[i];
                        this[i] = this[i + 1];
                        this[i + 1] = temp;
                    }
                    if(this[i].mks == this[i+1].mks)
                    {
                        if((this[i].name.compare(this[i+1].name)) < 0)
                            {
                                BTech_stud temp = this[i];
                                this[i] = this[i + 1];
                                this[i + 1] = temp;
                            } 
                    }
                }
            }
        }

        void display()
        {
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Reg No. : " << regno << endl;
            cout << "Marks : " << mks << endl << endl;
        }
};

int main()
{
    STUDENT *S;
    BTech_stud B[MAXSZ];
    MTech_stud M[MAXSZ];
    int n, x;

    while(1)
    {
        cout << "Choose Programme : \n";
        cout << "1. B.Tech \n";
        cout << "2. M.Tech \n";
        cout << "Enter 0 to EXIT \n";
        cout << "Your Choice : ";
        cin >> x;

        switch(x)
        {
            case 0:
                cout << "Exiting...";
                exit(0);
            
            case 1:
                cout << "Enter number of Students enrolled in the B.Tech programme ( <10 ) : ";
                cin >> n;
                cout << "Enter data of "<< n <<" student(s)";
                S = B;
                for( int i = 0; i < n; ++i)
                {
                    cout << "Student #" << i+1 << endl;
                    B[i].getval();
                }
                S->sort(n);
                cout <<"The details of students sorted according to Marks : \n";
                for(int i = n-1; i >= 0; --i)
                {
                    B[i].display();
                }
                
                break;
            case 2:
                cout << "Enter number of Students enrolled in the M.Tech programme ( <10 ) : ";
                cin >> n;
                cout << "Enter data of "<< n <<" student(s)\n";
                S = M;
                for( int i = 0; i < n; ++i)
                {
                    cout << "Student #" << i+1 << endl;
                    M[i].getval();
                }
                S->sort(n);
                cout <<"The details of students sorted according to Marks : \n";
                for(int i = n-1; i >= 0; --i)
                {
                    M[i].display();
                }
          
                break;
            default:
                cout << "Invalid entry!!! Retry.";
          
        }
    }
    return 0;
}