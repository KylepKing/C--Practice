#include <iostream>

int main(){

    //a nested loop is a loop inside of another loop, one use could be to manage rows and columns
    // ex for rows and columns: the outer loop manages row and the inner manages column
    

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;

    for(int i = 1; i <=rows; i++)
    {
        for(int j = 1; j <=columns; j++)
        {                               //inner loop runs 10 times to print 1-10 then out runs 3 times 
            std::cout << symbol;      // this causes the inner loop run an addtional 2 times
        }
        std::cout << '\n';   //last line of outerloop to run before it loops
    }


    return 0;
}