#include <iostream>
//c++ is read from top to bottom so if you are calling on a function in main it must be written above it or you will get a error
// a solution to this is declaring a function above main but defining it below later

void happyBirthday(std::string name, int age); // function declaration

int main()
{
    //function = a block of reusable code

    std::string name = "Kyle";
    int age = 20;

    happyBirthday(name, age); //function call, passing in the name variable as an argument to the function

    return 0;
}

void happyBirthday(std::string name, int age) // function definition, sets a parameter for the function that accepts a string argument/variabe aka name
{
    std::cout << "Happy Birthday to " << name << "!\n"; //will get an error due to name not being in the scope of this function if you dont accept the arguemnt from the function call
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to " << name << "!\n";
    std::cout << "You are now " << age << " years old!\n";
}
