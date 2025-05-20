#include <iostream>

int main(){

//while loops check the conditon then run the loop then check then run. This goes on till check fails

    std::string name;

    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';





//do while loop = do some block of code first, THEN repeat again if condition is true

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    }while(number< 0);

    std::cout << "The # is: " << number;

    return 0;
}