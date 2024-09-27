#include <iostream>

/*
Q-4) Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account.
*/

class BankAccount
{
private:
    int accountNumber;
    float Balance;

public:
    BankAccount(int accnumber, float balance)
    {
        accountNumber = accnumber;
        Balance = balance;
    }

    void deposit(float amount)
    {
        if(amount > 0)
        {
            Balance += amount;
            std::cout << "deposited: " << amount << std::endl;
        }
    }

    void withdraw(float amount)
    {
        if(amount > 0 && amount <= Balance)
        {
            Balance -= amount;
            std::cout << "withdrew: " << amount << std::endl;
        }

        else if(amount > Balance)
        {
            std::cout << "insufficient funds: " << std::endl;
        }
    }

    void displayAccountDetails()
    {
        std::cout << "Account number: " << accountNumber << std::endl;
        std::cout << "Current balance: " << Balance << std::endl;
    }
};

int main()
{
    BankAccount account(1155448899, 5000);

    account.displayAccountDetails();

    account.deposit(1000);

    account.withdraw(1500);

    account.displayAccountDetails();

    return 0;
}