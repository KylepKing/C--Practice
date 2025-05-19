#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main(){

    /* Namespace = provides a solution for preventing name conflicts 
    in large projects. Each entity needs a unique name.
    A namespace allows for identically named entities as long as the namespaces are different.
    */
    
    int x = 0;

    std::cout << x; // prints 0
    std::cout << first::x; // prints 1
    std::cout << second::x; // prints 2

    //note: if you put 'using namespace first;' at the top of this method it will assume all variables are using the 'first' namespace so you dont need to put the identifier every time.

    return 0;
}