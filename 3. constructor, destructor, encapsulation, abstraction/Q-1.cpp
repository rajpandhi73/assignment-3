#include <iostream>

/*
Q-1) Write a programto find the multiplication values and the cubic values 
usinginline function
*/

int multiply(int a, int b) 
{
    return a * b;
}

int cube(int z) 
{
    return z * z * z;
}

int main() 
{
    int num1, num2;

    std::cout << "Enter two numbers to multiply: ";
    std::cin >> num1 >> num2;

    std::cout << "Multiplication of " << num1 << " and " << num2 << " is: " << multiply(num1, num2) << std::endl;

    int num;
    std::cout << "Enter a number to find its cube: ";
    std::cin >> num;

    std::cout << "Cube of " << num << " is: " << cube(num) << std::endl;

}
