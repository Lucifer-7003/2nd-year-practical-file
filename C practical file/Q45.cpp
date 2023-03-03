// Q45. Assume that a bank maintains two kinds of accounts for customers, one called a savings account and the other a current account.
//    a. The savings account provides compound interest and withdrawal facilities but no checkbook facility.
//    b. The current account provides a checkbook facility but no interest. Current account holders should also maintain a minimum balance of Rs.1000 and if the balance falls below this level, a service charge is imposed.
//    c. Create a class account that stores the customer name, account number and type of account. From this derive the classes: - cur_acct and sav_acct to make them more specific to their requirements.
//    d. Include necessary member functions to achieve the following tasks: -
//        i. Accept a deposit from a customer and update the balance.
//        ii. Display the balance.
//        iii. Complete and deposit interest.
//        iv. Permit withdrawal and update the balance.
//        v. Check for the minimum balance, impose a penalty if necessary, and upgrade the balance. Do not use any constructors.
//        vi. Use member functions to initialize the class members.

#include <iostream>
#include <string>
using namespace std;

// The Account class serves as the base class for all other account types
class Account
{
protected:
    string name;
    int acc_no;
    string type;
    double balance;

public:
    // Initialize account details
    void initialize(string n, int a, string t, double b)
    {
        name = n;
        acc_no = a;
        type = t;
        balance = b;
    }

    // Deposit money into the account
    void deposit(double amt)
    {
        balance += amt;
        cout << "Deposit of Rs." << amt << " successful.\n";
        cout << "Current balance: Rs." << balance << endl;
    }

    // Display the current balance of the account
    void displayBalance()
    {
        cout << "Current balance: Rs." << balance << endl;
    }

    // These functions are declared as virtual, so that they can be overridden by derived classes
    virtual void depositInterest() = 0;    // Deposit interest into the account
    virtual void withdraw(double amt) = 0; // Withdraw money from the account
    virtual void checkMinBalance() = 0;    // Check if the account has fallen below its minimum balance
};

// The CurrentAccount class is derived from the Account class
class CurrentAccount : public Account
{
private:
    const double MIN_BALANCE = 1000;  // Minimum balance for a current account
    const double SERVICE_CHARGE = 50; // Service charge for falling below minimum balance

public:
    // Deposit interest into the account (no interest for current account)
    void depositInterest()
    {
        // No interest in current account
    }

    // Withdraw money from the account
    void withdraw(double amt)
    {
        if (balance - amt < MIN_BALANCE)
        {
            cout << "Insufficient balance. Cannot withdraw.\n";
            return;
        }

        balance -= amt;
        cout << "Withdrawal of Rs." << amt << " successful.\n";
        cout << "Current balance: Rs." << balance << endl;

        checkMinBalance();
    }

    // Check if the account has fallen below its minimum balance, and impose a service charge if necessary
    void checkMinBalance()
    {
        if (balance < MIN_BALANCE)
        {
            balance -= SERVICE_CHARGE;
            cout << "Service charge of Rs." << SERVICE_CHARGE << " imposed for falling below minimum balance.\n";
            cout << "Current balance: Rs." << balance << endl;
        }
    }
};

// SavingsAccount is a derived class of the Account class
// It adds a RATE variable and implements depositInterest, withdraw and checkMinBalance functions

class SavingsAccount : public Account
{
private:
    const double RATE = 0.05;

public:
    // Adds interest to the balance
    void depositInterest()
    {
        double interest = balance * RATE;
        balance += interest;

        cout << "Interest of Rs." << interest << " deposited.\n";
        cout << "Current balance: Rs." << balance << endl;
    }

    // Withdraws an amount from the balance
    void withdraw(double amt)
    {
        if (balance - amt < 0)
        {
            cout << "Insufficient balance. Cannot withdraw.\n";
            return;
        }

        balance -= amt;
        cout << "Withdrawal of Rs." << amt << " successful.\n";
        cout << "Current balance: Rs." << balance << endl;
    }

    // Does not have minimum balance requirement
    void checkMinBalance()
    {
        // No minimum balance in savings account
    }
};

int main()
{
    // Create SavingsAccount object and perform operations on it
    SavingsAccount sa;
    sa.initialize("John Doe", 1001, "Savings", 5000.0);
    sa.displayBalance();
    sa.deposit(1000);
    sa.depositInterest();
    sa.withdraw(2000);

    cout << endl;

    // Create CurrentAccount object and perform operations on it
    CurrentAccount ca;
    ca.initialize("Jane Doe", 1002, "Current", 5000.0);
    ca.displayBalance();
    ca.deposit(1000);
    ca.withdraw(4000);
    ca.checkMinBalance();
    ca.withdraw(2000);

    return 0;
}