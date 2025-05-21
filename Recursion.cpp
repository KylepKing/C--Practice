#include <iostream>


void walk(int steps); 
int factorial(int num);

int main()
{
    // recursion = a programming technique where a function invokes itself from within
    //             break a complex concept into repeateble single steps
    //              Func invokes itself from within

    // iterative vs recursive
    // advantages = less code and its cleaner, useful for sorting and searcing algs
    // disadvantages = uses more memory and is slower


    walk(100); 

    int num;
    std::cout << "enter a number to get its factorial: ";
    std::cin >> num;

    std::cout << factorial(num);


    return 0;
}
void walk(int steps)
{
   //iterative: for(int i = 0; i < steps; i++)
    if(steps > 0)
    {
        std::cout << "You take a step\n";
        walk(steps - 1); //recursive, if caught in infinite loop you will cause stack overflow
    }

}
int factorial(int num)
{
    if(num > 1)
    {
        return num*factorial(num-1);
    }
    else
    {
        return 1;
    }
}