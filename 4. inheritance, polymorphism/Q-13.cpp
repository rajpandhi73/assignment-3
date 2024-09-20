#include <iostream>

//Q-13) Write a program to find the max number from given two numbers using friend function

class Number
{
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend int findMax(Number &n1, Number &n2);
};

int findMax(Number &n1, Number &n2)
{
    if(n1.num > n2.num)
        return n1.num;

    else
        return n2.num;
}

int main()
{
    Number num1(15);
    Number num2(20);

    std::cout << "The maximum number is: " << findMax(num1, num2) << std::endl;

    return 0;
}