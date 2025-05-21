#include <iostream>

void bubbleSort(int array[], int size); // function declaration

int main()
{
    int array[] = { 10, 1, 9, 2, 8, 3, 7, 4, 6, 5}; // array of ints
    int size = sizeof(array)/sizeof(array[0]); // calculates number of elements in array

    bubbleSort(array, size); // calls the function and passes the array to the function to get sorted. 
    //The sorted array in the other function carries over to the main function because the array is passed by reference
    //(its a pointer, so change the pointer you chance the original)

    for(int element : array)
    {
        std::cout << element << " ";
    }

    return 0;
}
void bubbleSort(int array[], int size) //bubble sort, O(n^2) time complexity because it goes through n elements and compares them to n elements
{
    int temp;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++) //adding - i is not necessary but it makes the algorithm more efficient because the last i elements are already sorted
        {
            if(array[j] > array[j + 1]) // compares the two elements and sorts in acending order, if you want decending change the > to <
            {
                temp = array[j]; // swaps the two elements
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}   