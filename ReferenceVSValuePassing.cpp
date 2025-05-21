#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{

    std::string x = "Kool-Aid";
    std::string y = "Water";
    
    //swap(x, y); pass by value, wont swap these local variables (assuming swap function didnt add &)
    swap(x, y); // pass by reference, will swap these local variables (assuming swap function added &)

    std::cout << "x: " << x << '\n'; // prints the variable stored at the  memeory address
    std::cout << "y: " << y << '\n'; // prints the variable stored at the  memeory address
    
    return 0;
}
//normally when you pass a variable to a function it passes the value of that variable, not the memory address of that variable
// this means that if you change the value of the variable in the function it will not change the value of the variable in the main function
void swap(std::string &x, std::string &y)
{
    std::string temp;
    temp = x; // temp is a copy of x
    x = y; // x is now equal to y
    y = temp; // y is now equal to temp
}