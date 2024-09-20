#include <iostream>

/*
Q-7) Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.
*/

class Date 
{
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int y) 
    {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

    int getDaysInMonth(int m, int y) 
    {
        if (m == 2) 
        {
            return isLeapYear(y) ? 29 : 28;
        } 
        
        else if (m == 4 || m == 6 || m == 9 || m == 11) 
        {
            return 30;
        } 
        
        else 
        {
            return 31;
        }
    }

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    bool setDate(int d, int m, int y) 
    {
        if (m >= 1 && m <= 12 && d >= 1 && d <= getDaysInMonth(m, y) && y >= 1) 
        {
            day = d;
            month = m;
            year = y;
            return true;
        } 
        
        else 
        {
            std::cout << "Invalid date!" << std::endl;
            return false;
        }
    }

    int getDay() 
    {
        return day;
    }

    int getMonth() 
    {
        return month;
    }

    int getYear() 
    {
        return year;
    }

    void displayDate() 
    {
        std::cout << "Date: " << day << "/" << month << "/" << year << std::endl;
    }

    bool isValid() 
    {
        return month >= 1 && month <= 12 && day >= 1 && day <= getDaysInMonth(month, year) && year >= 1;
    }
};

int main() 
{
    Date date;

    int day, month, year;

    std::cout << "Enter day: ";
    std::cin >> day;

    std::cout << "Enter month: ";
    std::cin >> month;

    std::cout << "Enter year: ";
    std::cin >> year;

    if (date.setDate(day, month, year)) 
    {
        date.displayDate();
    } 
    
    else 
    {
        std::cout << "Failed to set date due to invalid input." << std::endl;
    }

    return 0;
}
