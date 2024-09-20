#include <iostream>

/*
Q-3) Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.
*/

class Car 
{
private:
    std::string company;  
    std::string model;    
    int year;             

public:
       void setCompany(std::string c) 
    {
        company = c;
    }

    std::string getCompany() 
    {
        return company;
    }

    void setModel(std::string m) 
    {
        model = m;
    }

    std::string getModel() 
    {
        return model;
    }

    void setYear(int y) 
    {
        if (y > 1885 && y <= 2024) 
        {  
            year = y;
        } 
        
        else 
        {
            std::cout << "Please enter a valid year!" << std::endl;
        }
    }

    int getYear() 
    {
        return year;
    }

    void display() 
    {
        std::cout << "Car Company: " << company << std::endl;
        std::cout << "Car Model: " << model << std::endl;
        std::cout << "Manufacturing Year: " << year << std::endl;
    }
};

int main() 
{
    Car car;

    car.setCompany("Honda");
    car.setModel("City");
    car.setYear(2018);

    car.display();

    std::cout << "Company (via getter): " << car.getCompany() << std::endl;
    std::cout << "Model (via getter): " << car.getModel() << std::endl;
    std::cout << "Year (via getter): " << car.getYear() << std::endl;

    return 0;
}
