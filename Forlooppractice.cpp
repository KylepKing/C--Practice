#include <iostream>

int main(){


    // for loop checks condition then runs then after run it increments then checks conditons again
    for(int i = 10; i >0; i--)
    {
        std::cout << i << "\n";
    }
    std::cout << "HAPPY NEW YEAR!!!\n";


    for(int i = 1; i<=20; i++)
    {
        if(i == 13)
        {
            //break;   //break breaks out of the loop and does not execute any further iterations. This ex would output 1-12 but not 13-20
            continue; //continue skips the current iteration, skipped 13 bc its unlucky
        }
        std::cout << i << '\n';
    }

    return 0;
}