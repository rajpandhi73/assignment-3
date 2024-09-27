#include <iostream>

template <typename T>
void sortArray(T arr[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - 1 - i; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() 
{
    int intArr[] = {10, 6, 8, 11, 9};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    std::cout << "Original integer array: ";
    displayArray(intArr, intSize);

    sortArray(intArr, intSize);

    std::cout << "Sorted integer array: ";
    displayArray(intArr, intSize);

    return 0;
}
