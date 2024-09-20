#include <iostream>
#include <string>

/*
Q-6) Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.
*/

class Person 
{
private:
    std::string name;    
    int age;                 
    std::string country;

public:
    void setName(std::string n) 
    {
        name = n;
    }

    std::string getName() 
    {
        return name;
    }

    void setAge(int a) 
    {
        if (a > 0) 
        { 
            age = a;
        } 
        
        else 
        {
            std::cout << "Please enter a valid age!" << std::endl;
        }
    }

    int getAge() 
    {
        return age;
    }

    void setCountry(std::string c) 
    {
        country = c;
    }

    std::string getCountry() 
    {
        return country;
    }

    void display() 
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Country: " << country << std::endl;
    }
};

int main() 
{
    Person person;

    person.setName("Raj Pandhi");
    person.setAge(21);
    person.setCountry("India");

    person.display();

    std::cout << "Name using getter: " << person.getName() << std::endl;
    std::cout << "Age using getter: " << person.getAge() << std::endl;
    std::cout << "Country using getter: " << person.getCountry() << std::endl;

    return 0;
}
