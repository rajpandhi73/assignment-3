#include <iostream>

/*
Q-8) Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation
*/

class Address 
{
private:
    std::string street;
    std::string city;
    std::string state;
    int zipCode;

public:
    Address(std::string st, std::string c, std::string s, int zip) : street(st), city(c), state(s), zipCode(zip) {}

    void displayAddress() 
    {
        std::cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode << std::endl;
    }
};

class Student 
{
private:
    std::string name;
    std::string className;
    int rollNumber;
    float marks;
    Address address;

    char calculateGrade() 
    {
        if (marks >= 90)
            return 'A';

        else if (marks >= 75)
            return 'B';

        else if (marks >= 60)
            return 'C';

        else if (marks >= 50)
            return 'D';
        
        else
            return 'F';
    }

public:
    Student(std::string n, std::string cls, int roll, float m, Address addr)
        : name(n), className(cls), rollNumber(roll), marks(m), address(addr) {}

    void displayInfo() 
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        address.displayAddress();
    }
};

int main() 
{
    Address addr("samrat app", "rajkot", "india", 360001);

    Student student("raj pandhi", "10th Grade", 77, 96, addr);

    student.displayInfo();

    return 0;
}
