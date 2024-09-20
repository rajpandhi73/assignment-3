#include <iostream>
#include <string>

//Q-10) Write a program to concatenate the two strings using Operator Overloading

class StringConcat 
{
private:
    std::string str; 
public:
    StringConcat(std::string s = "") : str(s) {}

    StringConcat operator+(StringConcat& s) 
    {
        return StringConcat(str + s.str); 
    }

    void display() 
    {
        std::cout << str << std::endl;
    }
};

int main() 
{
    StringConcat str1("Flutter ");
    StringConcat str2("is Best");

    StringConcat result = str1 + str2;

    std::cout << "Concatenated String: ";

    result.display();

    return 0;
}
