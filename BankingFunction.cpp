#include <iostream>
#include <iomanip> //help set precision for floating point numbers
#include <limits> // for std::numeric_limits
//This program is a simple banking applications that lets users deposit withdraw and check their balance


void showBalance(double balance);
double deposit();
double withdraw(double balance);


int main()
{

    double balance = 0;
    int choice = 0;


    do{

        std::cout << "****************\n"; 
        std::cout << "Enter your choice:\n";
        std::cout << "****************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;
        if(std::cin.fail()) {
            std::cin.clear(); // clear error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            choice = 0; // set to invalid choice
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard any extra input
        }
        

        switch(choice)
        {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
            
        }
        
    }while(choice != 4); // loop until user chooses to exit
    
    return 0;
}
void showBalance(double balance)
{
    std::cout << "Your balance is: $" <<std::setprecision(2) << std::fixed << balance << '\n'; //sets up to 2 decimal places, aka cents
}
double deposit()
{
    double amount = 0;

    std::cout << "Enter the amount to deposit: $";
    std::cin >> amount;

    if(amount > 0)
    {
        return amount;
    }
    else
    {
        std::cout << "Invalid deposit amount. Please enter a positive number.\n";
        return 0;
    }
}
double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter the amount to withdraw: $";
    std::cin >> amount;

    if(amount > 0 && amount <= balance)
    {
        return amount;
    }
    else if(amount > balance)
    {
        std::cout << "Insufficient funds. Please enter a smaller amount.\n";
        return 0;
    }
    else
    {
        std::cout << "Invalid withdrawal amount. Please enter a positive number.\n";
        return 0;
    }
}