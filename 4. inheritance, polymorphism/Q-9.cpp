#include <iostream>

//Q-9) Write a Program of Two 1D Matrix Addition using Operator Overloading

class Matrix 
{
private:
    int arr[5];

public:
    Matrix() 
    {
        for (int i = 0; i < 5; i++) 
        {
            arr[i] = 0;
        }
    }

    void input() 
    {
        std::cout << "Enter 5 elements of the matrix: ";
        for (int i = 0; i < 5; i++) 
        {
            std::cin >> arr[i];
        }
    }

    Matrix operator+( Matrix& m) 
    {
        Matrix temp;
        for (int i = 0; i < 5; i++) 
        {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

    void display() 
    {
        std::cout << "Matrix elements: ";
        for (int i = 0; i < 5; i++) 
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() 
{
    Matrix m1, m2, result;

    std::cout << "Matrix 1:" << std::endl;
    m1.input();

    std::cout << "Matrix 2:" << std::endl;
    m2.input();

    result = m1 + m2;

    std::cout << "Result of Matrix after Addition:" << std::endl;
    result.display();

    return 0;
}
