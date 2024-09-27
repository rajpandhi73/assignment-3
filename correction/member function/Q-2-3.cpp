#include <iostream>
#include <string>

class BankAccount 
{
private:
    std::string name;
    int accountNumber;
    std::string accountType;
    float balance;

public:
    BankAccount(std::string depositor_name, int acc_number, std::string acc_type, float total_balance)
    {
        name = depositor_name;
        accountNumber = acc_number;
        accountType = acc_type;
        balance = total_balance;
    }

    void deposit(int amount)
    {
        if (amount > 0) 
        {
            balance += amount;
            std::cout << amount << " deposited successfully." << std::endl;
        } 
        
        else 
        {
            std::cout << "Invalid deposit amount!" << std::endl;
        }
    }

    void withdraw(int amount)
    {
        if (amount > 0) 
        {
            if (amount <= balance) 
            {
                balance -= amount;
                std::cout << amount << " withdrawn successfully." << std::endl;
            } 
            
            else 
            {
                std::cout << "Insufficient balance!" << std::endl;
            }
        } 
        
        else 
        {
            std::cout << "Invalid withdrawal amount!" << std::endl;
        }
    }

    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main()
{
    std::string name;
    int accountNumber;
    std::string accountType;
    float balance;
    int depositAmount, withdrawAmount;

    std::cout << "Enter depositor's name: ";
    std::cin >> name;

    std::cout << "Enter account number: ";
    std::cin >> accountNumber;

    std::cout << "Enter account type (Savings/Current): ";
    std::cin >> accountType;

    std::cout << "Enter initial balance: ";
    std::cin >> balance;

    BankAccount account(name, accountNumber, accountType, balance);

    account.display();

    std::cout << "\nEnter amount to deposit: ";
    std::cin >> depositAmount;
    account.deposit(depositAmount);

    std::cout << "\nEnter amount to withdraw: ";
    std::cin >> withdrawAmount;
    account.withdraw(withdrawAmount);

    std::cout << "\nUpdated Account Details:\n";
    account.display();

    return 0;
}


