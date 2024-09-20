#include <iostream>

/*
Q-5) Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.
*/

class Triangle
{
private:
    int side1;
    int side2;
    int side3;

public:
    Triangle(int s1, int s2, int s3): side1(s1), side2(s2), side3(s3){}

    void determineType()
    {
        if(side1 == side2 && side2 == side3)
        {
            std::cout << "Equilateral Triangle" << std::endl;
        }

        else if(side1 == side2 || side1 == side3 || side2 == side3)
        {
            std::cout << "Isosceles Traingle" << std::endl;
        }

        else
        {
            std::cout << "Scalene Triangle" << std::endl;
        }
    }
};

int main()
{
    int s1, s2, s3;
    std::cout << "Enter length of three sides of triangle= " << std::endl;
    std::cout << "Side-1: ";
    std::cin >> s1;
    std::cout << "Side-2: ";
    std::cin >> s2;
    std::cout << "Side-3: ";
    std::cin >> s3;

    Triangle triangle_(s1, s2, s3);

    triangle_.determineType();

    return 0;
}