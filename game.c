#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random, guess;
    char again;

    printf(".....Welcome to Number Guessing Game.....\n");

    do
    {
        int totalGuess = 0;

        srand(time(NULL));
        random = rand() % 100 + 1;

        do
        {
            printf("\nEnter your guess (1 to 100): ");
            scanf("%d", &guess);

            if (guess < 1 || guess > 100)
            {
                printf("Invalid input. Please enter a number between 1 and 100.\n");
                continue;
            }

            ++totalGuess;

            if (guess < random)
            {
                printf("Guess a larger number.\n");
            }
            else if (guess > random)
            {
                printf("Guess a smaller number.\n");
            }
            else
            {
                printf("\nCongratulations! You guessed the number in %d attempts.\n", totalGuess);
            }

        } while (guess != random);

        do
        {
            printf("Do you want to play again? (y/n): ");
            scanf(" %c", &again);

            if (again != 'y' && again != 'Y' && again != 'n' && again != 'N')
            {
                printf("Invalid input. Please enter 'y' for yes or 'n' for no.\n");
            }

        } while (again != 'y' && again != 'Y' && again != 'n' && again != 'N');

    } while (again == 'y' || again == 'Y');

    printf("\nBye Bye, Thanks for Playing.\nDeveloped by: Atia Farha\n");

    return 0;
}