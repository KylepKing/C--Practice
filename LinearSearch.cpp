#include <iostream>

int searchArray(int array[], int size, int element); // function declaration

int main()
{
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]); // calculates number of elements in array
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum); // calls the function and assigns the return value to index

    if(index != -1)
    {
        std::cout << myNum << " is at index " << index << '\n'; // prints the index of the element
    }
    else
    {
        std::cout << myNum << " is not in the array" << '\n'; // prints that the element was not found
    }
    return 0;
}

int searchArray(int array[], int size, int element) //linear search , O(n) time complexity because it goes through n elements
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i; // returns the index of the element
        }
    }
    return -1; //sentinel value to indicate that the element was not found
}