#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t; //or using text_t = std::string;
typedef int number_t; //or using number_t = int;
int main(){
    /*
    typedef = reserved keyword used to create an additional name(alias) 
    for an existing data type. Helps to make code more readable and easier to maintain.
    Use when there is a clear benefit
    Replaced with'using' (work better w/ templates)
    */

    pairlist_t pairlist; //pairlist_t is now an alias for std::vector<std::pair<std::string, int>>
    text_t firstName = "Kyle"; //variable now behaves like a string
    number_t age = 19; //variable now behaves like an int

    std::cout << firstName << '\n'; //output the value of firstName
    std::cout << age << '\n'; //output the value of age
    return 0;
}