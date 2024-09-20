#include <iostream>

//Q-4) Write a C++ Program display Student Mark sheet using Multiple inheritance

class Person
{
protected:
    std::string name;
    int age;

public:
    void inputPersonData()
    {
        std::cout << "Enter student name: " << std::endl;
        std::cin >> name;
        std::cout << "Enter student age: " << std::endl;
        std::cin >> age;
    }

    void displayPersonData()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Marks
{
protected:
    int marksMaths;
    int marksEnglish;
    int marksScience;

public:
    void inputMarks()
    {
        std::cout << "Enter mathematics marks: " << std::endl;
        std::cin >> marksMaths;
        std::cout << "Enter science marks: " << std::endl;
        std::cin >> marksScience;
        std::cout << "Enter english marks: " << std::endl;
        std::cin >> marksEnglish;
    }

    void displayMarks()
    {
        std::cout << "Marks in Mathematics: " << marksMaths << std::endl;
        std::cout << "Marks in Science: " << marksScience << std::endl;
        std::cout << "Marks in English: " << marksEnglish << std::endl;
    }

    int TotalMarks()
    {
        return marksMaths + marksEnglish+ marksScience;
    }

    float percentage()
    {
        return (TotalMarks() / 3.0);
    }
};

class Student : public Person, public Marks
{
public:
    void inputStudentData()
    {
        std::cout << "Enter Student details: " << std::endl;
        inputPersonData();
        inputMarks();
    }

    void displayMarksheet()
    {
        std::cout << "----STUDENT'S MARKSHEET----" << std::endl;
        displayPersonData();
        displayMarks();
        std::cout << "Total Marks:" << TotalMarks() << std::endl;
        std::cout << "Percentage:" << percentage() << "%" << std::endl;
    }
};

int main()
{
    Student student_;

    student_.inputStudentData();

    student_.displayMarksheet();

    return 0;
}

