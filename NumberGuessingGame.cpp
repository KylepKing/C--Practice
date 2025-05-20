#include <iostream>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = rand() % 100 + 1; // Random number between 1 and 100

    std::cout << "****** NUMBER GUESSING GAME ******" << '\n';

    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if(guess > num)
        {
            std::cout << "Too high! Try again.\n";
        }
        else if(guess < num)
        {
            std::cout << "Too low! Try again.\n";
        }
        else
        {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries!\n";
        }

    }while(guess != num);

    std::cout << "*********************************" << '\n';


    return 0;
}