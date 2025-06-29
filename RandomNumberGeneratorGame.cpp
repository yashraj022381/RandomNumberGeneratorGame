#include<iostream>
#include<limits>
#include"Random.h"

int getGuess(int count, int min, int max)
{
    while(true)
    {
        std::cout << "Guess # " << count << std::endl;

        int guess {};
        std::cin >> guess;

        bool sucess{std::cin};
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if(!sucess || guess < min || guess > max)
        {
            continue;
        }
        return guess;
    }
}

bool playHiLo(int guesses, int min, int max)
{
    std::cout << "Let's play a game. I'm thinking of a number between " << min << " and " << max << ". You have " << guesses << " tries to guess what it is.\n" << std::endl;

    int number{Random::get(min, max)};

    for(int count = 1; count <= guesses; ++count)
    {
        int guess {getGuess(count, min, max)};

        if(guess > number)
        {
            std::cout << "Your guess is to high" << std::endl;
        }

        else if(guess < number)
        {
            std::cout << "Your guess is to low" << std::endl;
        }

        else
        {
            std::cout << "Correct. You win!" << std::endl;
            return true;
        }
    }
    std::cout << "Sorry, you lose. The correct number is: " << number << std::endl;
    return false;
}

bool playAgain()
{
    while(true)
    {
        char ch {};
        std::cout << "Would you like to play again(y/n): " << std::endl;
        std::cin >> ch;

        switch(ch)
        {
            case 'y':
            {
                return true;
            }

            case 'n':
            {
                return false;
            }
        }
    }
}

int main()
{
    constexpr int guesses {7};
    constexpr int min {1};
    constexpr int max {100};

    do
    {
        playHiLo(guesses, min, max);
    } while (playAgain());

    std::cout << "Thankyou for playing" << std::endl;

    return 0;   
}