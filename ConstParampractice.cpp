#include <iostream>
void printInfo(const std::string name, const int age);
int main()
{

    // const parameter = parameter that is effectively read-only
    //                = cannot be changed in the function
    //                = used to prevent accidental changes to the parameter
    //                =code is more secure and conveys intent
    //                = can be useful for references and pointers

    std::string name = "Kyle";
    int age = 20;

    printInfo(name, age); // calls the function and passes the variables to the function

    return 0;
}
void printInfo(const std::string name, const int age)
{
    //name = "";  wont work bcause name is a const parameter
    //age = 0;    wont work because age is a const parameter
    std::cout << "Name: " << name << '\n'; // prints the variable stored at the  memeory address
    std::cout << "Age: " << age << '\n'; // prints the variable stored at the  memeory address
}