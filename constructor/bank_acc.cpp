#include <iostream>
#include <cstring>
using namespace std;

class BankAccount {
private:
    char accountHolder[30];
    int accountNumber;
    double balance;

public:
    // Defining default constructor
    BankAccount()
    {
        cout << "Acount creation process stared ... "<<endl;
    }
    // Constructor to initialize account details
    BankAccount(char *name, int accNum, double initialBalance) {
        strcpy(accountHolder,name);
        accountNumber = accNum;
        balance = initialBalance;
        cout << "Account created successfully!" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Initial Balance: " << balance << endl;
    }

    // Destructor to display message when object goes out of scope
    ~BankAccount() {
        cout << "Account " << accountNumber 
	        << " belonging to " << accountHolder 
	        << " is closed." << endl;
    }

    //void get data from the user
    void get_data()
    {
        cout << "Account Holder: " << endl;
        cin.ignore();
        cin.getline(accountHolder, 30);
        cout << "Account Number: " << endl;
        cin >> accountNumber;
        cout << "Initial Balance: " << endl;
        cin >> balance;
    }

    // Function to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount 
	        << " | New Balance: " << balance 
	        << endl;
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount 
		            << " | New Balance: " << balance 
		            << endl;
        }
    }

    // Function to display account details
    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    // Creating an account
    BankAccount acc("Dibyasundar Das", 101, (double)(5000.0));
    acc.deposit(2000);
    acc.withdraw(1500);
    acc.display();
    // Account goes out of scope here, triggering destructor
    return 0;
}