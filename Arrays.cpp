#include <iostream>


int main()
{
    //array = a data structure that can hold multiple values of the same type
    //        values are accessed by an index number
    //        "kind of like a variable that holds multiple values"


    std::string cars[] = {"Corvette", "Mustang", "Camry"}; // arrays can only contain valyes of the same type
    //could also declare an array without assigning values, size is required though: cars[3];
    //You then could individually assing values to the indexes: cars[0] = "Corvette"; cars[1] = "Mustang"; cars[2] = "Camry";

    cars[0] = "Camaro";

    std::cout << "Example 1:\n";
    std::cout << cars << '\n'; //prints the memory address of the first element in the array
    std::cout << cars[0] << '\n'; // prints the variable stored at the first memeory address
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';
    std::cout << sizeof(cars) << " bytes in size\n"; // prints the size of the array in bytes
    std::cout << sizeof(cars)/sizeof(std::string) << " elements in array\n"; // prints the size of the array in bytes

    double prices[] = {5.00, 7.50, 9.99, 15.00}; // array of doubles
    
    std::cout << "Example 2:\n";
    std::cout << prices[0] << '\n'; // prints the variable stored at the first memeory address
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n'; 
    std::cout << sizeof(prices) << " bytes in size\n"; // prints the size of the array in bytes
    std::cout << sizeof(prices)/sizeof(double) << " elements in array\n"; // prints the size of the array in bytes

    return 0;
}