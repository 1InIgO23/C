#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    int counter = 5;
    int enterNumber;
    int win_or_lose = 1;

    srand(time(NULL)); //This is the seed used for generating a random number

    int randomNumber = rand() % 11; //This generates a number between 0 and 10, using "% 11"

    printf("Your score is %d\n", counter);
    while (counter > 0) {
        printf("Guess the number: ");
        scanf("%d", &enterNumber);
        if (enterNumber > randomNumber) {
            printf("The number is lower.\n");
            counter = counter -1;
            printf("Your score is %d\n", counter);
        } else if (enterNumber < randomNumber) {
            printf("The number is higer.\n");
            counter = counter -1;
            printf("Your score is %d\n", counter);
        } else if (enterNumber == randomNumber) {
            win_or_lose = 0;
            break;
        }
    }

    if (win_or_lose == 0) {
        printf("You won!");
    } else if (win_or_lose == 1) {
        printf("You lose.");
    }

    return 0;
}