#include <iostream>

//Q-2) Write a C++ Program to find Area of Rectangle using inheritance


class shape
{
protected:
    int length;
    int width;

public:
    void setDimensions(int l, int w)
    {
        length = l;
        width = w;
    }
};

class Rectangle : public shape
{
public:
    int calculateArea()
    {
        return length * width;
    }

    void displayArea()
    {
        std::cout << "Area of Rectangle:" << calculateArea() << std::endl;
    }
};

int main()
{
    Rectangle rect;

    int l, w;

    std::cout << "Enter length of Reactangle: " << std::endl;
    std::cin >> l;
    std::cout << "Enter width of Rectangle: " << std::endl;
    std::cin >> w;

    rect.setDimensions(l, w);

    rect.displayArea();

    return 0;
}