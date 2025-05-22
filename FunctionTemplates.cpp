#include <iostream>


template <typename T, typename U> 
auto max(T x, U y) //as long as number of params dont change they can be any type (depending on what the func does)
{ //auto means compiler deduces what the return type should be
    return (x > y) ? x:y;
}
int main()
{
    // Function template = describes what a function looks like. 
    //                      can be used to generate as many overloaded functions
    //                      as needed, each using different data types.

    std::cout << max(1, 2.1) << '\n';

    return 0;
}