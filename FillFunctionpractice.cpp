#include <iostream>


int main()
{
    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    
    // This array below is innefficient because you are manually filling all the indexes with the same value, faster to use fill() if you want to fill it with the same values
    //std::string foods[10] = {"pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza", "pizza"}; // array of strings

    const int SIZE = 99; // lets us change the size without having to change it in multiple places
    std::string foods[SIZE]; // array of strings
    fill(foods, foods + (SIZE/3), "pizza"); // fills the array with the same value
    fill(foods + (SIZE/3), foods + (SIZE/3)*2, "hamburger"); // fills the rest of the array with a different value
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdogs"); // fills the rest of the array with a different value


    for(std::string food : foods)
    {
        std::cout << food << '\n'; // prints the variable stored at the  memeory address
    }
    return 0;
}