#include <iostream>

int main() {

    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression 1 : expression 2;

    int grade; 
    std::cout << "Enter your grade number: ";
    std::cin >> grade;

    grade >= 60 ? std::cout << "You pass!\n" : std::cout << "You fail!\n" ;
    // this is the same as:
    /*    if(grade >= 60){
        std::cout << "You pass!" << '\n';
    } else {
        std::cout << "You fail!" << '\n';
    }
    */

    std::cout <<  "Examples: \n";

    int number;
    std::cout << "Enter a number to see if its ODD or EVEN: ";
    std::cin >> number;
    number % 2 == 1 ? std::cout << "ODD\n" : std::cout << "EVEN\n";
    // this is the same as:
    /*    if(number % 2 == 1){
        std::cout << "ODD" << '\n';
    } else {
        std::cout << "EVEN" << '\n';
    }
    */

    bool hungry = false;
    std::cout << "Hungry bool value set to false so\n";
    std::cout << (hungry ? "You are hungry" : "You are not hungry") << '\n';
    // this is the same as: 
    /*    if(hungry){
        std::cout << "You are hungry" << '\n';
    } else {
        std::cout << "You are not hungry" << '\n';
    }
    */

    return 0;
}