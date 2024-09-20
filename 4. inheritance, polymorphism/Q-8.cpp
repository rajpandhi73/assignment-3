# include <iostream>

/*
Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading
*/

int main() 
{

  char op;
  float num1, num2;

  std::cout << "Enter operator: +, -, *, /: ";
  std::cin >> op;

  std::cout << "Enter two operands: ";
  std::cin >> num1 >> num2;

  switch(op) 
    {  
    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
      cout << "Error.. operator is not correct";
      break;
    }

  return 0;
}