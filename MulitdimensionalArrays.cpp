#include <iostream>

int main()
{
    // 2D array = array of arrays, can represent a table or matrix
     // 2D array of strings, setting row size is not required but setting column size is required
    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Challenger", "Durango", "Ram"}}; // 2D array of strings
                            
    /*std::cout << cars[0][0] << " "; // prints the first element in the first array
    std::cout << cars[0][1] << " "; // prints the second element in the second array
    std::cout << cars[0][2] << "\n"; // prints the third element in the third array
    std::cout << cars[1][0] << " "; // prints the first element in the second array
    std::cout << cars[1][1] << " "; // prints the second element in the second array
    std::cout << cars[1][2] << "\n"; // prints the third element in the second array
    std::cout << cars[2][0] << " "; // prints the first element in the third array
    std::cout << cars[2][1] << " "; // prints the second element in the third array
    std::cout << cars[2][2] << "\n"; // prints the third element in the third array
    */ // this way is slow, lets iterate through the array instead

    int rows = sizeof(cars)/sizeof(cars[0]); // calculates number of rows in array
    int columns = sizeof(cars[0])/sizeof(cars[0][0]); // calculates number of columns in array

    for(int i = 0; i< rows; i++)
    {
        
        for(int j = 0; j < columns; j++)
        {
            std::cout << cars[i][j] << " "; // prints the variable stored at the  memeory address
        }
        std::cout << "\n"; // prints a new line after each row
    }

    return 0;
}