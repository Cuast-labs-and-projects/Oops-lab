#include <iostream>

using namespace std;

class Account
{
private:
    int no;
    string name;
    string type;
    float balance;


public:
    void setValues(string inpName, string intType)
    {
        no = rand() % 1000000;
        name = inpName;
        type = intType;
        balance = 0;
    }

    void deposit(float amount) {
        if (amount < 0) {
            cout << "Invalid deposit\n";
        }
        else {
            balance += amount;
        }
    }

    void withdraw(float amount) {
        if (amount < 0) {
            cout << "Invalid withdrawal\n";
        }
        else if (amount > balance) {
            cout << "Not enough balance\n";
        }
        else if(balance-amount<=800){
            cout<<"you need a minimum balance of 800";
        }
        else {
            balance -= amount;
        }
    }

    void display() {
        cout <<"\nAccount no: " << no<< "\nName: " << name << "\nBalance: " << balance << "\naccount type:" << type<<endl;
    }

};

void displayMenu() {
    cout << "Enter 1 to deposit money\nEnter 2 to withdraw money\nEnter 3 to display name and account balance\nEnter 4 to exit\nEnter 5 to display menu again\n";
}

int main()
{   
    string name;
    string type;
    Account account;
    
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter account type: ";
    getline(cin, type);
    account.setValues(name, type);

    displayMenu();
    while (true) {
        int choice;
        cout << "Enter choice (Enter 5 to display Menu): ";
        cin >> choice;
        float amount;
        switch (choice) {
            case 1:
                cout << "Enter amount to be deposited: ";
                cin >> amount;
                if(amount>1000)
                account.deposit(amount);
                else
                {
                  cout<<"you need more than 1000 to start a deposit";
                }
                
                break;
            case 2:
                cout << "Enter amount to be withdrawn: ";
                cin >> amount;
            
                account.withdraw(amount);
                break;
            case 3:
                account.display();
                break;
            case 4:
                exit(0);
                break;
            case 5:
                displayMenu();
                break;
            default:
                cout << "Invalid choice\n";
        }
    }
    
    return 0;
}