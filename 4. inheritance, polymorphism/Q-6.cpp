#include <iostream>

//Q-6) Write a C++ Program to show access to Private Public and Protected using Inheritance

class Base 
{
  private:
    int pvt = 1;

  protected:
    int prot = 2;

  public:
    int pub = 3;

    int getPVT() 
    {
      return pvt;
    }
};

class PublicDerived : public Base 
{
  public:
    int getProt() 
    {
      return prot;
    }
};

int main() 
{
  PublicDerived object1;
  std::cout << "Private = " << object1.getPVT() << std::endl;
  std::cout << "Protected = " << object1.getProt() << std::endl;
  std::cout << "Public = " << object1.pub << std::endl;
  
  return 0;
}