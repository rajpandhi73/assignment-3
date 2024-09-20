#include <iostream>
#include <algorithm>

//Q-2) Write a program of to sort the array using templates

int main()
{
    int arr[] = {5,6,8,7,9};

    std::sort(std::begin(arr), std::end(arr));

    for(int i : arr)
    {
        std::cout << i << " ";
    }
    
    return 0;
}