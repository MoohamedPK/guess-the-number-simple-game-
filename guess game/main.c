#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumebr = 8;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int outOfGuessing = 0;

    while (guess !=  secretNumebr && outOfGuessing == 0) {

        if (guessCount != guessLimit) {
            printf("guess the number :");
            scanf("%d", &guess);
            guessCount++;
        } else {
            outOfGuessing = 1;
        }
    }

    if (outOfGuessing == 1) {
        printf("You Out Of Guessing");
    } else {
        printf("You Win!");
    }


    return 0;
}
