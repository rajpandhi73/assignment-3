#include <iostream>

/*
Q-5) Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.
*/

class Rectangle 
{
private:
    float length; 
    float width;

public:
    Rectangle(float l, float w) 
    {
        length = l;
        width = w;
    }

    float area() 
    {
        return length * width;
    }

    float perimeter() 
    {
        return 2 * (length + width);
    }

    void display() 
    {
        std::cout << "Length: " << length << std::endl;
        std::cout << "Width: " << width << std::endl;
        std::cout << "Area: " << area() << std::endl;
        std::cout << "Perimeter: " << perimeter() << std::endl;
    }
};

int main() 
{
    float length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    Rectangle rectangle(length, width);
    
    rectangle.display();

    return 0;
}
