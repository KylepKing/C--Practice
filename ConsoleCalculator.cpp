#include <iostream>

int main(){

    char op;
    double num1, num2, result;

    std::cout << "************* CALCULATOR *************" << '\n';

    std::cout << "Enter either +, -, *, or /: ";
    std::cin >> op;
    if(op != '+' && op != '-' && op != '*' && op != '/'){
        std::cout << "That was not a valid operator\n";
        return 1; // Exit the program if the operator is invalid
    }

    std::cout << "Enter #1: ";
    std::cin >> num1;

    std::cout << "Enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
            break;
        //default is not needed here because we already checked for invalid operator above, if you wait to check operator till after you get input 1 and 2 it messes up the output
    }

    std::cout << "**************************************";

    return 0;
}