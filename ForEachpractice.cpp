#include <iostream>


int main() 
{
    // foreach loop = loop that eases the traversal over an iterable data set

    std::string students[] = {"spongebob", "patrick",  "squidward"};

    for(std::string student : students)// goes through each element in the array and assigns it to the variable student
    {                                  // student is basically functioning as your index number
        std::cout << student << '\n'; // prints the variable stored at the  memeory address
    }

    int grades[] = {65, 72, 81, 93}; // array of ints
    for(int grade : grades)
    {
        std::cout << grade << '\n';
    }

    return 0;
}