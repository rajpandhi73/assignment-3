#include <iostream>

/*
Q-5) Assume that the test results of a batch of students are stored in three 
different classes. Class Students are storing the roll number. Class Test 
stores the marks obtained in two subjects and class result contains the 
total marks obtained in the test. The class result can inherit the details 
of the marks obtained in the test and roll number of students. 
(Multilevel Inheritance)

*/

class Student 
{
protected:
    int rollNumber;

public:
    void setRollNumber(int roll) 
    {
        rollNumber = roll;
    }

    void displayRollNumber() 
    {
        std::cout << "Roll Number: " << rollNumber << std::endl;
    }
};

class Test : public Student 
{
protected:
    float subject1;
    float subject2;

public:
    void setMarks(float marks1, float marks2) 
    {
        subject1 = marks1;
        subject2 = marks2;
    }

    void displayMarks() 
    {
        std::cout << "Marks in Subject 1: " << subject1 << std::endl;
        std::cout << "Marks in Subject 2: " << subject2 << std::endl;
    }
};

class Result : public Test 
{
private:
    float totalMarks;

public:
    void calculateTotal() 
    {
        totalMarks = subject1 + subject2;
    }

    void displayResult() 
    {
        displayRollNumber();
        displayMarks();
        std::cout << "Total Marks: " << totalMarks << std::endl;
    }
};

int main() 
{
    Result studentResult;

    studentResult.setRollNumber(101);

    studentResult.setMarks(88.5, 92.0);

    studentResult.calculateTotal();

    studentResult.displayResult();

    return 0;
}
