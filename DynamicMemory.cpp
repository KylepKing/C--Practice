#include <iostream>

int main()
{
    //dynamic memory = memory that is allocated after the program is already
    //                 compiled & running. Use the 'new' operator to allocate memory
    //                 in the heap rather than the stack

    //                  Useful when we do not know how much memory we will need.
    //                  Makes our programs more flexible especially when accepting user input.


    int *pNum = NULL;

    pNum = new int;  //frees up room in the heap for one int (kinda like mallac)

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "Value: " << *pNum << '\n';

    delete pNum; //like free


    char *pGrades = NULL;
    int size;

    std::cout << "How many grades to enter in?: ";
    std::cin >> size;

    pGrades = new char[size];

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter grade #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }

    for(int i = 0; i < size; i++)
    {
        std::cout << pGrades[i] << " ";
       
    }

    delete[] pGrades;

    return 0;
}