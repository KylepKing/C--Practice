#include <iostream>

int main(){

    /*
    type conversion = conversion of a value of one data type to another
    implicit conversion = automatic conversion of one data type to another by the compiler
    explicit conversion = Precede value with a new data type, done by programmer
    */

    int x = (double)3.14; //initializes an int then converts the int to an double
    std::cout << x << '\n'; // prints 3 due to 3.14 getting truncated to 3 when assigned as an int THEN its converted to double which is still 3
    
    // you can alsu use explicit conversion in a function statement like std::cout (note not technically a function but an object of std::ostream class)
    std::cout << (char) 100; // prints 'd' because 100 is the ASCII value for 'd'
    
    std::cout << '\n' << '\n' << "Example: Suppose we have an online exam. We have to give the student a score: #correct/total # of questions" << '\n';
    
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; //divides now by a double so it does not truncate the decimal
    std::cout << "Score: " << score << "%" << '\n'; // prints 80% because we converted the int to a double before dividing
    
    return 0;
}