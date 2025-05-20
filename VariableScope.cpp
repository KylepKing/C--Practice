#include <iostream>

int myNum = 3; //global variable //causes error when same named variable is passed to a function that calls this

void printNum(); // function definition, 

int main()
{
    //Local variables = declared inside a function or block {}
    //Global variables = declared outside of all functions

    int myNum = 1; //local variables

    printNum(); //function call, ignores local variable value, function assumes global variable value

    std::cout << "The number is: " << myNum << '\n';// a function will first look for local variables then global so this would print 1

    std::cout << ::myNum << '\n'; //prints global due to the scope resolution operator (::) which tells the compiler to look for the global variable
    return 0;
}
void printNum() // function definition, doesnt need myNum as a argument due to it being global
{
    std::cout << "The number is: " << myNum << '\n'; // prints the number passed to the function
}