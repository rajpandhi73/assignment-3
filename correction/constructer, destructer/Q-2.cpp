#include <iostream>

/*
Q-2) Write a program of Addition, Subtraction, Division, Multiplication 
usingconstructor.
*/

class Calculator 
{
private:
    float num1, num2;

public:
    Calculator(float a, float b) 
    {
        num1 = a;
        num2 = b;
    }

    int add() 
    {
        return num1 + num2;
    }

    int subtract() 
    {
        return num1 - num2;
    }

    int multiply() 
    {
        return num1 * num2;
    }

    int divide() 
    {
        if (num2 != 0) 
        {
            return num1 / num2;
        } 
        
        else 
        {
            std::cout << "Division by zero error!" << std::endl;
            return 0;
        }
    }

    void displayResults() 
    {
        std::cout << "Addition: " << add() << std::endl;
        std::cout << "Subtraction: " << subtract() << std::endl;
        std::cout << "Multiplication: " << multiply() << std::endl;
        std::cout << "Division: " << divide() << std::endl;
    }
};

int main() 
{
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Calculator calc(num1, num2);

    calc.displayResults();

    return 0;
}
