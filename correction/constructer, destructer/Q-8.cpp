#include <iostream>

class Student 
{
private:
    char name[50];
    char className[20];
    int rollNumber;
    float marks;
    char address[100];

    char calculateGrade() 
    {
        if (marks >= 90)
        { 
        return 'A';
        }
        
        else if (marks >= 75)
        { 
        return 'B';
        }
        
        else if (marks >= 50)
        { 
        return 'C';
        }
        
        else
        { 
        return 'D';
        }
    }

public:
    void inputDetails() 
    {
        std::cout << "Enter student name: ";
        std::cin >> name;

        std::cout << "Enter class: ";
        std::cin >> className;

        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;

        std::cout << "Enter marks: ";
        std::cin >> marks;

        std::cout << "Enter address: ";
        std::cin >> address;
    }

    void displayInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << calculateGrade() << std::endl;
        std::cout << "Address: " << address << std::endl;
    }
};

int main() 
{
    Student student;

    student.inputDetails();

    student.displayInfo();

    return 0;
}
