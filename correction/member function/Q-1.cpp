#include <iostream>

// Q-1) WAP to create simple calculator using class

class calculator
{
    public:
    
    int add(int a, int b)
    {
        return a+b;
    }

    int subract(int a, int b)
    {
        return a-b;
    }

    int multiply(int a, int b)
    {
        return a*b;
    }

    int divide(float a, float b)
    {
        if (b==0)
        {
            std::cout<<"division by zero is not possible."<< std::endl;
            return 0;
        }
        return a/b;    
    }
};

int main()
{
    calculator calc;
    int choice;
    int num1, num2;

    std::cout<<"select operation:"<<std::endl;
    std::cout<<"1. ADDITION"<<std::endl;
    std::cout<<"2. SUBTRACTION"<<std::endl;
    std::cout<<"3. MULTIPLICATION"<<std::endl;
    std::cout<<"4. DIVISION"<<std::endl;
    std::cout<<"Enter Your Choice from (1/2/3/4): "<<std::endl;
    std::cin>>choice;

    std::cout<<"Enter First number= ";
    std::cin>>num1;
    std::cout<<"Enter Second Number= ";
    std::cin>>num2;

    switch(choice)
    {
        case 1:
        std::cout<<"The result is: "<<calc.add(num1, num2)<<std::endl;
        break;

        case 2:
        std::cout<<"The result is: "<<calc.subract(num1, num2)<<std::endl;
        break;

        case 3:
        std::cout<<"The result is: "<<calc.multiply(num1, num2)<<std::endl;
        break;

        case 4:
        std::cout<<"The result is: "<<calc.divide(num1, num2)<<std::endl;
        break;

        default:
        std::cout<<"Invalid input please choose within given choice."<<std::endl;
    }

    return 0;

}
