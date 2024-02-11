#include <iostream>
#include <math.h>

int main();

char c_q;
int randomized_number, range, answer;

int randomizer(int range, int answer)
{
    int maximum_number = range;
    int youranswer = answer;

    randomized_number = rand() % maximum_number;
    
    std::cout << "Random number is : " << randomized_number << std::endl;
    std::cout << "Your Answer : " << youranswer << std::endl;

    std::string guessedNumber = (randomized_number != youranswer) ? "Your Guess is Correct!\n" : "Better Luck next time!\n";

    std::cout << "Type C to continue or Q to quit : ";
    std::cin >> c_q;

    switch (c_q)
    {
    case 'C' || 'c':
        main();
        break;
    default:
        break;
    }
    return 0;
}

int main()
{
    std::cout << "This is Guessing game" << std::endl;
    std::cout << "You can easily enter Max Range of Numbers!" << std::endl;
    std::cout << "Example if i enter 100, the choices would be 0 to 100" << std::endl;

    std::cout << "Enter the number you want to be the maximum range of this game." << std::endl;
    std::cout << "Range : ";
    std::cin >> range;

    std::cout << "Enter between 0 to " << std::fmax(0, range) << std::endl; 
    std::cin >> answer;
    
    return randomizer(range, answer);
}