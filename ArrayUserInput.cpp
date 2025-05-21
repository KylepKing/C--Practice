#include<iostream>

int main()
{
    std::string foods[5]; // array of strings, STATICALLY ALLOCATED CANNOT CHANGE SIZE DURING RUNTIME
    int size = sizeof(foods)/sizeof(foods[0]); // calculates number of elements in array
    std::string temp;

    for(int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i+1 << ": ";
        std::getline(std::cin, temp); //store input in temp
        if(temp == "q") //checks if temp is q, if q then break out of loop
        {
            break; // breaks out of the loop
        }
        else // if not q then stores temp value in the index of array, this way we dont get q in the array
        {
            foods[i] = temp; // assigns the value of temp to the array at index i
        }
    }

    std::cout << "You like the following food:\n";

    for(int i = 0; !foods[i].empty(); i++)
    {
        std::cout << foods[i] << '\n'; // prints the variable stored at the  memeory address

    }

    return 0;
}