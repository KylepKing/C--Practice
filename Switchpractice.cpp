#include <iostream>

int main(){

    // switch = alternative to using many else if statements
    // compare one value against matching cases

    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "January" << '\n';
            break;
        case 2:
            std::cout << "February" << '\n';
            break;
        case 3:
            std::cout << "March" << '\n';
            break;
        case 4:
            std::cout << "April" << '\n';
            break;
        case 5:
            std::cout << "May" << '\n';
            break;
        case 6:
            std::cout << "June" << '\n';
            break;
        case 7:
            std::cout << "July" << '\n';
            break;
        case 8:
            std::cout << "August" << '\n';
            break;
        case 9:
            std::cout << "September" << '\n';
            break;
        case 10:
            std::cout << "October" << '\n';
            break;
        case 11:
            std::cout << "November" << '\n';
            break;
        case 12:
            std::cout << "December" << '\n';
            break;
        default:
            std::cout << "Invalid month! Please only enter numbers (1-12)" << '\n'; //default is used when no cases match
    }

    char grade; 

    std::cout << "Enter your grade(UPPERCASE): ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "Excellent!" << '\n';
            break;
        case 'B':
            std::cout << "Good!" << '\n';
            break;
        case 'C':
            std::cout << "Average!" << '\n';
            break;
        case 'D':
            std::cout << "Poor!" << '\n';
            break;
        case 'F':
            std::cout << "Fail!" << '\n';
            break;         
        default: 
            std::cout << "Invalid grade! Please only enter letters (A-F)" << '\n'; //default is used when no cases match

    }

    return 0;
}