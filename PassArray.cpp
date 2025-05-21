#include <iostream>

double getTotal(double prices[], int size); // function declaration

int main()
{

    double prices[] = {49.99, 15.05, 75, 9.99}; // array of doubles
    int size = sizeof(prices)/sizeof(prices[0]); // calculates number of elements in array
    double total = getTotal(prices, size);

    std::cout << "$" << total;



    return 0;
}
double getTotal(double prices[], int size)// when a function recieves an array it decays to a pointer to that array and no longer knows the size of the array so you must also give it the size
{
    double total = 0;
    
    for(int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}