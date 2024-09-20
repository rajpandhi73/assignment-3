#include <iostream>

//Q-12) Write a programto swap the two numbers using friend function without using third variable


class Number 
{
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend void swapNumbers(Number &n1, Number &n2);

    void display() 
    {
        std::cout << num << std::endl;
    }
};

void swapNumbers(Number &n1, Number &n2) 
{
    n1.num = n1.num + n2.num; 
    n2.num = n1.num - n2.num;
    n1.num = n1.num - n2.num; 
}

int main() 
{
    Number num1(10);
    Number num2(20);

    std::cout << "Before Swapping:" << std::endl;
    std::cout << "Num1: "; num1.display();
    std::cout << "Num2: "; num2.display();

    swapNumbers(num1, num2);

    std::cout << "After Swapping:" << std::endl;
    std::cout << "Num1: "; num1.display();
    std::cout << "Num2: "; num2.display();

    return 0;
}
