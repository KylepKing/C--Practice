#include <iostream>
#include <math.h>

int main(){

    double x = 3;
    double y = 4;
    double max;
    double min;

    max = std::max(x, y); // std::max is a function that returns the maximum of two values
    std::cout << "The maximum of " << x << " and " << y << " is: " << max << '\n';
    min = std::min(x, y); // std::min is a function that returns the minimum of two values
    std::cout << "The minimum of " << x << " and " << y << " is: " << min << '\n';

    double power = pow(2,3); // pow is a function that returns the power of a number
    std::cout << "2 to the power of 3 is: " << power << '\n';
    
    double squareroot= sqrt(9);
    std::cout << "The square root of 9 is: " << squareroot << '\n'; // sqrt is a function that returns the square root of a number

    double absvalue = abs(-5);
    std::cout << "The absolute value of -5 is: " << absvalue << '\n'; // abs is a function that returns the absolute value of a number
    
    //round() is a function that rounds a number to the nearest integer: ex: round(2.1) = 2
    //ceil() is a function that rounds a number up to the nearest integer: ex: ceil(2.1) = 3
    //floor() is a function that rounds a number down to the nearest integer: ex: floor(2.9) = 2
    return 0;
}