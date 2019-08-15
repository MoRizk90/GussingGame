/*
    Author : Mohammed Rizk
    Email: Mo.Magdy.Rizk@Gmail.com
    Description : The below script was mainly done to practice my ability to control flow the program


*/

#include <stdio.h>
#include <stdlib.h>
#include <Time.h>

int main()
{
    int trials = 5;
    int randomNumber = 0;
    int userGuess = 0;
    int guessRandomDiff = 0;
    time_t T;
    srand((unsigned)time(&T));
    randomNumber = rand() %21;

    printf("This is a guessing name try your luck by entering a number from 0 to 20.\n");
    while(trials >= 0){
        printf("The random number is : %d\n", randomNumber);
        printf("You have %d trials left.\n", trials);
        printf("Your Guess is : ");
        scanf("%d", &userGuess);
        if(userGuess > 20){
            printf("Please enter a number between 0 and 20.");
            continue;
        }else{
            guessRandomDiff = randomNumber - userGuess;
            if(guessRandomDiff > 0){
                printf("The number you entered is a little bit low, Try again with higher value");
                trials -= 1;
                continue;
            }
            else if(guessRandomDiff < 0){
                printf("The number you entered is a little bit high, Try again with lower value");
                trials -= 1;
                continue;
            }
            else{
                printf("Congratulation you guessed correclty");
                break;
            }
        }

    }
    printf("Game OVER!!!!");
    return 0;
}
