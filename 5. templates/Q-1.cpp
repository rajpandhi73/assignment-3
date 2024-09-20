#include <iostream> 
using namespace std; 

//Q-1) Write a program of to swap the two values using template

 
template <class T> 
int swap_numbers(T& x, T& y) 
{ 
	T t; 
	t = x; 
	x = y; 
	y = t; 
} 
 
int main() 
{ 
	int a, b; 
	a = 10, b = 20; 
 
	swap_numbers(a, b); 
	cout << a << " " << b << endl; 
	return 0; 
}
