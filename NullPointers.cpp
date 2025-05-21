#include <iostream>

int main()
{
    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value,
    //              it means that the pointer is not pointing to anything   

    // nullptr = keyword that represents a null pointer literal

    // nullptrs are helpful when determining if an address was successfully assigned to a pointer

    //when using ptrs, be careful that your code is not derecferencing a null pointer or
    //pointing to a free memory. This will cause undefined behavior (Segmentation fault)

    int *pointer = nullptr; // pointer is initialized to null
    int x = 123;

    pointer = &x; // pointer is assigned the address of x

    if(pointer == nullptr)
    {
        std::cout << "address was not assigned\n"; // pointer is null
    }
    else
    {
        std::cout << "address was assigned\n"; // pointer is not null
        std::cout << *pointer << '\n'; // prints the variable stored at the  memeory address
    }

    return 0;
}