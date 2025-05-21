#include <iostream>

int main()
{
    //pointers = variable that stores the memory address of another variable
    // sometimes its easier to work with an address

    // & address of operator = returns the memory address of a variable
    // * dereference operator = returns the value at the memory address of a variable


    std::string name = "Kyle";
    int age = 20;
    std::string freePizzas[5] = {"Pizza1", "Pizza2", "Pizza3", "Pizza4", "Pizza5"}; // array of strings


    std::string *pName = &name; // pName is a pointer to name, stores the memory address of name
    int *pAge = &age; // pAge is a pointer to age, stores the memory address of age
    std::string *pFreePizzas = freePizzas; //freePizzas is already a memory address bc its an array

    std::cout << *pName << '\n'; // prints the variable stored at the  memeory address
    std::cout << *pAge << '\n'; // prints the variable stored at the  memeory address
    std::cout << *pFreePizzas << '\n'; // ptrs always point to the first element in the array

    return 0;
}