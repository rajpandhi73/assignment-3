#include <iostream>
#include <string>

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
    std::string name, country;
    int age;

    std::cout << "Enter name: ";
    std::cin >> name;
    person.setName(name);

    std::cout << "Enter age: ";
    std::cin >> age;
    person.setAge(age);

    std::cout << "Enter country: ";
    std::cin >> country;
    person.setCountry(country);

    person.display();

    std::cout << "Name using getter: " << person.getName() << std::endl;
    std::cout << "Age using getter: " << person.getAge() << std::endl;
    std::cout << "Country using getter: " << person.getCountry() << std::endl;

    return 0;
}
