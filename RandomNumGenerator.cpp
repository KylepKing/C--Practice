#include <iostream>
//#include <ctime> MAY BE NEEDED FOR TIME FUNCTION


int main()
{
    //pseudo-random = NOT truly random (but close)

    srand(time(NULL)); //seed the random number generator with the current time

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    
    std::cout << num1 << '\n';
    std::cout << num2 << '\n';
    std::cout << num3 << '\n';
    return 0;
}