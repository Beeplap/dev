#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main() {
    srand(time(0));
    int random_number = (rand()%100)+1;
    int number_of_guesses = 0;
    int guessed_number;
    do
    {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guessed_number);
        if (guessed_number > random_number) 
        {
            printf("Lower number please!\n");
        }
        else if (guessed_number < random_number)
        {
            printf("Higher number please!\n");
        }
        else{
            printf("Congratulations! Correct number was %d \n",random_number);
            
        }
        number_of_guesses=number_of_guesses+1;
    } while (guessed_number != random_number);
    printf("You guessed the number in %d attempts.\n", number_of_guesses);
    return 0;
 }