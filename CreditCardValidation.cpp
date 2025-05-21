#include <iostream>
//Luhn Algorithm = algorithm used to validate credit card numbers
// 1: Double every second digit from the right, if doubled number is 2 digits, split them
// 2: Add all the single digits from step 1
// 3: Add all the odd digits from right to left
// 4: Sum results from step 2 and 3
// 5: If the sum is divisible by 10, the number is valid

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);
int main()
{

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result % 10 == 0)
    {
        std::cout << "Valid card number\n";
    }
    else
    {
        std::cout << "Invalid card number\n";
    }

    return 0;
}
int getDigit(const int number)
{
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i-=2)
    {
        sum+= cardNumber[i] - '0'; // dont have to double odd digits
    }
    return sum;
}
int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i-=2)
    {
        sum+= getDigit((cardNumber[i] - '0') * 2); // convert char to int and double it
    }
    return sum;
}