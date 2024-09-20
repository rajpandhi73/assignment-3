#include <iostream>

/*
Q-11) Write a program to calculate the area of circle, rectangle and 
triangleusing Function Overloading

Rectangle: Area * breadth 
Triangle: ½ * Area * breadth
Circle: Pi * Area * Area
*/

class Shape 
{
public:
    float area(float length, float breadth) 
    {
        return length * breadth;
    }

    float area(float base, float height, bool isTriangle) 
    {
        return 0.5f * base * height;
    }

    float area(float radius) 
    {
        float Pi = 3.14;
        return Pi * radius * radius;
    }
};

int main()
{
    Shape shape_;

    float length = 5.0f, breadth = 3.0f;
    std::cout << "Area of Rectangle: " << shape_.area(length, breadth) << std::endl;

    float base = 4.0f, height = 6.0f;
    std::cout << "Area of Triangle: " << shape_.area(base, height, true) << std::endl;

    float radius = 7.0f;
    std::cout << "Area of Circle: " << shape_.area(radius) << std::endl;

    return 0;
}
