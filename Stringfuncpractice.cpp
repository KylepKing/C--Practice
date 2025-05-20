#include <iostream>
#include <algorithm> // for std::remove

int main(){

    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.empty())
    { // empty() is a function that returns true if the string is empty
        std::cout << "You did not enter your name" << '\n'; 
    }
    else
    {
        std::cout << "Hello " << name << '\n';
       // length() is a function that returns the length of a string
        if (name.length() > 12)
        {
            std::cout << "Your name cannot be over 12 characters long " << '\n';
        }
        else
        {
            std::cout << "Valid name: " << name << '\n';

            name.erase(remove(name.begin(), name.end(), ' '), name.end());  // erase() is a function that erases a string from the specified index to the end of the string

            name.append("@gmail.com"); // append() is a function that appends a string to the end of another string
            std::cout << "Your username is now: " << name << '\n';
        }
    }
    
    //name.remove(#, #) // remove() is a function that removes a string from the specified index to the end of the string or from the specified index to the specified index
    //name.replace(#, #, " ") // replace() is a function that replaces a string from the specified index to the end of the string or from the specified index to the specified index
    //name.erase(#, #) // erase() is a function that erases a string from the specified index to the end of the string or from the specified index to the specified index
    //name.at(0, 1, 2,...) // at() is a function that returns the character at the specified index
    //name.insert(#, " ") // insert() is a function that inserts a string at the specified index and shifts the rest of the string to the right
    //name.clear() // clear() is a function that clears the string




    return 0;
}