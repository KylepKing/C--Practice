#include <iostream>

// cout << (insertion operator) = used to output data to the console
// cin >> (extraction operator) = used to input data from the console

int main(){

    std::string name;
    int age;

    /*std::cout << "Whats your name?: ";  Input of a string, do not need to worry about spaces/more words in input
    std::cin >> name; //input the name from the console
    */

    std::cout << "Whats your full name?: "; //getting string input with multiple words
    std::getline(std::cin >> std::ws, name); //getline is used to get a string with white spaces, grabs whole input line
    // std::ws is used to ignore leading whitespace characters before reading the input 
    
    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old!" << '\n';
    
    return 0;
}