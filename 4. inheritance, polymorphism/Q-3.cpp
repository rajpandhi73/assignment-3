#include <iostream>

/*
Q-3) Create a class person having members name and age. Derive a class 
student having member percentage. Derive another class teacher 
having member salary. Write necessary member function to initialize, 
read and write data. Write also Main function (Multiple Inheritance)
*/

class Person
{
protected: 
    std::string name;
    int age;

public:
    void readPersonData()
    {
        std::cout << "enter name: " << std::endl;
        std::cin >> name;
        std::cout << "enter age: " << std::endl;
        std::cin >> age;
    }

    void displayPersonData()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "age: " << age << std::endl;
    }
};

class Student : public Person
{
protected:
    float percentage;

public:
    void readStudentData()
    {
        readPersonData();
        std::cout << "enter percentage: " << std::endl;
        std::cin >> percentage;
    }

    void displayStudentData()
    {
        displayPersonData();
        std::cout << "Percentage: " << percentage << "%" << std::endl;
    }
};

class Teacher : public Person
{
protected:
    int salary;

public:
    void readTeacherData()
    {
        readPersonData();
        std::cout << "Enter Salary: " << std::endl;
        std::cin >> salary;
    }

    void displayTeacherData()
    {
        displayPersonData();
        std::cout << "Salary: " << salary << std::endl;
    }
};

class TeachingAssistant : public Student, public Teacher
{
public:
    void readTAdata()
    {
        std::cout << "Enter details for Teaching Assistant: " << std::endl;
        readStudentData();
        std::cout << "Enter salary for Teaching Assistant: " << std::endl;
        std::cin >> salary;
    }

    void displayTAdata()
    {
        displayStudentData();
        std::cout << "Salary:" << salary << std::endl;
    }
};

int main()
{
    TeachingAssistant TA;

    TA.readTAdata();
    TA.displayTAdata();

    return 0;
}