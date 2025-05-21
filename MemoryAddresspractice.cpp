#include <iostream>

int main()
{
    //memory address = location in memory where data is stored
    // a memory address can be accessed with & (address of operator)

    std::string name = "Kyle";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n'; // prints the memory address of name
    std::cout << &age << '\n'; // prints the memory address of age
    std::cout << &student << '\n'; // prints the memory address of student 

    return 0;
}