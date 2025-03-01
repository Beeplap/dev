#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int randomnumber = (rand() % 100) + 1;
    int number_of_guesses = 0;
    int guessed_number;
    do
    {
        printf("Guess the number");
        scanf("%d", &guessed_number);

        if (guessed_number > randomnumber)
        {
            printf("  Lower number please \n");
        }
        else if (guessed_number < randomnumber)
        {
            printf(" Higher number please \n");
        }
        else
        {
            printf("Congratulations!\n");
        }
        number_of_guesses++;
    } while (guessed_number != randomnumber);

    printf("You have guessed the number in %d guesses\n", number_of_guesses);

    return 0;
}