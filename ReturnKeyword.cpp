#include <iostream>


double square(double length);
double cube(double length);

std::string concatStrings(std::string string1, std::string string2); // function declaration

int main()
{
    //return = return a value back to the spot
    //         where you called the encompassing function

    double length = 6.0;
    double area = square(length); // function call, passing in the length variable as an argument to the function
    double volume = cube(length); // function call, passing in the length variable as an argument to the function

    std::cout << "Example 1: side lengths(double)\n";
    std::cout << "Area: " << area << "cm^2\n"; // prints the area of the square
    std::cout << "Volume: " << volume << "cm^3\n"; // prints the volume of the cube


    std::string firstName = "Kyle";
    std::string lastName = "King";
    std::string fullName = concatStrings(firstName, lastName); // function call, passing in the firstName and lastName variables as arguments to the function
    
    std::cout << "Example 2: strings\n";
    std::cout << "Full name: " << fullName << '\n'; // prints the full name by concatenating first and last names
    
    return 0;
}
double square(double length)
{
    double result = length * length; // better to probably write return length * length instead
    return result;
}
double cube(double length)
{
   return length * length * length; // returns the volume of the cube
}

std::string concatStrings(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}