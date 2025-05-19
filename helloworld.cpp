#include <iostream>

int main(){
    /* 
    std::cout << "I like pizza!" << '\n'; //when printing out to console we use << to start our msg/output. 
    std::cout << "Its really good!" << '\n'; // '\n' is better for performance than std::endl, but std::endl flushes the output buffer
    */

    int x; //declaration
    x = 5; //assignment
    //or int x = 5; declaration and assignment
    int y = 6;
    int sum = x+y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    //for string data type variable you need to format it like so
    std::string hello = "Hello World!";
    std::cout << hello << '\n';
    // to print out with a string and a variable or even multiple variables format as so
    std::cout << "My favorite phrase is: " << hello <<'\n';
    return 0;
}