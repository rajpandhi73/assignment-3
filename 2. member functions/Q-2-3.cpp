#include <iostream>
#include <string>

using namespace std;

/*
Q-2-3) Define a class to represent a bank account. Include the following members:
Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/


class BankAccount 
{
private:
    std::string name;
    int accountNumber;
    std::string accountType;
    float balance;

public:
    BankAccount(string depositor_name, int acc_number, string acc_type, float total_balance)
    {
        name= depositor_name;
        accountNumber= acc_number;
        accountType= acc_type;
        balance= total_balance;
    }

    void deposit(int amount)
    {
        if(amount>0)
        {
            balance += amount;
            std::cout<< amount  << "deposited successfully." << std:: endl;
        }
    }

    void withdraw(int amount)
    {
        if(amount>0)
        {
            if(amount <= balance)
            {
                balance -= amount;
                std::cout<< amount  << "withdrawn successfully." << std::endl;
            }

            else
            {
                std::cout<< "Insufficient amount!" << std::endl; 
            }
        }
    }

    void display()
    {
        std::cout<< "Name: "<< name << std::endl;
        std::cout<< "Balance: "<< balance << std::endl;
    }
};  

int main()
{
    BankAccount account("Raj Pandhi", 111222556, "Savings", 15000.00);

    account.display();
    account.deposit(5500);
    account.withdraw(2000);
    account.display();

    return 0;
}

