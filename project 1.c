#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int no_of_guesses;
    int guessed;

    no_of_guesses=0;

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    do{
        printf("Guess the number:");
        scanf("%d",&guessed);
        if (guessed>randomNumber)
        {
            printf("Lower number please!\n");
        }
        if (guessed<randomNumber)
        {
            printf("Higher number please!\n");
        }
        no_of_guesses++;
    }while(guessed!=randomNumber);
    printf("You guessed the number in %d guesses",no_of_guesses);
    return 0;
}
