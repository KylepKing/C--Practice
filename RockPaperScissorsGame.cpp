#include <iostream>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player, computer;

    player = getUserChoice();
    std::cout << "Your choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);


    return 0;
}
char getUserChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";
    do{
        std::cout << "Enter your choice:\n";
        std::cout << "**************************\n";
        std::cout << " 'r' for Rock\n";
        std::cout << " 'p' for Paper\n";
        std::cout << " 's' for Scissors\n";
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    
    return player;

}
char getComputerChoice()
{
    
    srand(time(0)); // Seed the random number generator
    int num = rand() % 3 + 1; // Generate a random number between 0 and 3

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice)
{

    switch(choice){
        case 'r': 
            std::cout << "Rock\n";
            break;
        case 'p': 
            std::cout << "Paper\n";
            break; 
        case 's': 
            std::cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player, char computer)
{

    switch(player)
    {
        case 'r':  //case if user chooses rock
            if(computer == 'r')
            {
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'p')
            {
                std::cout << "You lose!\n";
            }
            else
            {
                std::cout << "You win!\n";
            }
            break;
        case 'p':  //case if user chooses paper
            if(computer == 'p')
            {
                std::cout << "It's a tie!\n";
            }
            else if(computer == 's')
            {
                std::cout << "You lose!\n";
            }
            else
            {
                std::cout << "You win!\n";
            }
            break;
        case 's':  //case if user chooses scissors
            if(computer == 's')
            {
                std::cout << "It's a tie!\n";
            }
            else if(computer == 'r')
            {
                std::cout << "You lose!\n";
            }
            else
            {
                std::cout << "You win!\n";
            }
            break;
    }
}