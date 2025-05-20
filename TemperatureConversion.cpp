#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "************** TEMPERATURE CONVERSION *************" << '\n';
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to? (F or C): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) +32.0; // convert Celsius to Fahrenheit
        std::cout << "The temperature in Fahrenheit is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        
        temp = (temp - 32) / 1.8; // convert Fahrenheit to Celsius
        std::cout << "The temperature in Celsius is: " << temp << "C\n";
    }
    else{
        std::cout << "Invalid unit! Please enter either F or C.\n";
    }

    std::cout << "***************************************************" << '\n';
    return 0;
}