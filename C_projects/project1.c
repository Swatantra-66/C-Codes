#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// game to guess te random number

int main()
{
    int guessed_number;
    srand(time(0));
    int no_of_guesses = 0;
    int randomNumber = (rand() % 100) + 1;

    printf("Guess the number between 1 and 100\n");

    do
    {
        printf("Enter a number:");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congrats!");
        }
        no_of_guesses++;

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     int guessed_number;
//     int no_of_guesses = 0;
//     int randomNumber = (rand() % 100) + 1;

//     printf("Guess a number between 1 and 100\n");

//     do
//     {
//         printf("Enter a number:");
//         scanf("%d", &guessed_number);

//         if (guessed_number > randomNumber)
//         {
//             printf("Lower number Please!\n");
//         }
//         else if (guessed_number < randomNumber)
//         {
//             printf("Higher number please!\n");
//         }
//         else
//         {
//             printf("Congratss!");
//         }
//         no_of_guesses++;
//     } while (guessed_number != randomNumber);

//     printf("You guessed the number in %d guesses", no_of_guesses);

//     return 0;
// }
