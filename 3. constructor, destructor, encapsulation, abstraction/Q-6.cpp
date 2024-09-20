#include <iostream>

/*
Q-6) Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor
*/

class Employee 
{
  private: 
    std::string name;
    int employeeId;
    float salary;

  public:
    Employee(std::string & empName, int empId, float empSalary): name(empName), employeeId(empId), salary(empSalary) {}

    void calculateSalary(float performanceRating) 
    {
      if (performanceRating >= 0.0 && performanceRating <= 1.4) 
      { 
        salary *= performanceRating;      
      } 
      
      else 
      {
        std::cout << "Invalid performance rating. Salary remains unchanged." << std::endl;
      }
    }

    void setSalary(float empSalary) 
    {
      salary = empSalary;
    }

    std::string getName()  
    {
      return name;
    }

    int getEmployeeId()  
    {
      return employeeId;
    }

    float getSalary() 
    {
      return salary; 
    }
};

int main() 
{
  std::string empName; 
  int empId; 
  int empSalary;

  std::cout << "Input employee name: "; 
  std::cin >> empName;

  std::cout << "Input employee ID: ";
  std::cin >> empId; 

  std::cout << "Input employee salary: ";
  std::cin >> empSalary;

  Employee employee(empName, empId, empSalary);

  std::cout << "Initial salary: " << employee.getSalary() << std::endl;

  float performanceRating;
  std::cout << "Input performance rating (0.0-1.2): ";
  std::cin >> performanceRating;

  employee.calculateSalary(performanceRating);

  std::cout << "Updated salary: " << employee.getSalary() << std::endl;

  return 0;
}
