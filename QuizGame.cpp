#include <iostream>

int main()
{

    std::string questions[] = {"1. What year was C++ created?: ",
                               "2. Who invented C++?: ",
                               "3. What is the predecessor of C++?: ",
                               "4. Is the Earth flat?: ",};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1995"},
                                {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                                {"A. C", "B. C+", "C. C--", "D. B++"},
                                {"A. Yes", "B. no", "C. sometimes", "D. Whats earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'}; // correct answers

    int size = sizeof(questions)/sizeof(questions[0]); // calculates number of elements in array
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++)
    {
        std::cout << "************************************************\n";
        std::cout << questions[i] << '\n'; // prints the question
        std::cout << "************************************************\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n'; // prints the options
        }

        std::cin >> guess; // gets the users guess
        guess = toupper(guess); // converts the guess to uppercase

        if(guess == answerKey[i])
        {
            std::cout << "CORRECT!\n";
            score++; // increments the score
        }
        else
        {
            std::cout << "WRONG! The correct answer is " << answerKey[i] << '\n'; // prints the correct answer
        }

    }
    std::cout << "************************************************\n";
    std::cout << "*                   RESULTS                    *\n";
    std::cout << "************************************************\n";
    std::cout << "CORRECT GUESSES: " << score << '\n'; // prints the score
    std::cout << "# of QUESTIONS: " << size << '\n'; // prints the number of questions
    std::cout << "SCORE: " << (score/(double)size)*100 << "%\n"; // prints the percentage
    
    return 0;
}