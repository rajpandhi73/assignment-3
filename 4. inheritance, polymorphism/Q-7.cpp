#include <iostream>

//Q-7) Write a C++ Program to illustrates the use of Constructors in multilevel inheritance

class A 
{
public:
    void display() 
    {
        std::cout<<"Base class content.";
    }
};

class B : public A {};

class C : public B {};

int main() 
{
    C obj;
    obj.display();
    return 0;
}