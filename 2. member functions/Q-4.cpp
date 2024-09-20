#include <iostream>

/*
Q-4) Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.
*/

class Circle 
{
private:
    float radius;

public:
    Circle(float r) 
    {
        radius = r;
    }

    float area() 
    {
        float pi = 3.14;  
        return pi * radius * radius;
    }

    float circumference() 
    {
        float pi = 3.14;  
        return 2 * pi * radius; 
    }

    void display() 
    {
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Area: " << area() << std::endl;
        std::cout << "Circumference: " << circumference() << std::endl;
    }
};

int main() 
{
    
    float radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle circle(radius);

    circle.display();

    return 0;
}
