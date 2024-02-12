#include <iostream>
#include <math.h>

int main();

char c_q;
int randomized_number, range, answer, correct_answers, incorrect_answers;

int randomizer(int range, int answer)
{
    int maximum_number = range;
    int youranswer = answer;

    randomized_number = rand() % maximum_number + 1;
    
    std::cout << "\nRandom number : " << randomized_number << "\n";
    std::cout << "Your Answer   : " << youranswer << "\n\n";
    
    if(randomized_number == youranswer)
    {
        correct_answers += 1;
        std::cout << "You guessed correct!\n\n";
    }
    else
    {
        incorrect_answers += 1;
        std::cout << "Wrong guess, Better luck next time!\n\n";
    }
 
    std::cout << "Type C to continue or Q to quit : ";
    std::cin >> c_q;

    switch (c_q)
    {
        case 'C':
        case 'c':
            main();
            break;

        default:
            break;
    }
    return 0;
}

int main()
{
    system("cls");

    std::cout << "Correct Answer : " << correct_answers << "\t\t" << "Incorrect Answer : " << incorrect_answers << std::endl << std::endl;

    std::cout << "Enter the number you want to be the maximum range of this game." << std::endl;

    std::cout << "Range : ";
    std::cin >> range;

    std::cout << "\nEnter between 0 to " << std::fmax(0, range) << std::endl; 
    std::cin >> answer;
    
    return randomizer(range, answer);
}