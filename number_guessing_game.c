/*
 * Project:     Number Guessing Game
 * Author:      Tatah Withney
 * GitHub:      github.com/tatahwithney
 * License:     MIT
 * Date:        05-03-26
 * Description: A game where the player guesses a randomly
 *              generated number between 1 and 100
 *              best evealutaion time use binary search algorithm   
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;
    char play_again;

    printf("================================\n");
    printf("   NUMBER GUESSING GAME\n");
    printf("================================\n");

    do {
        srand(time(0));
        secret = (rand() % 100) + 1;
        attempts = 0;

        printf("\nI have picked a number between 1 and 100.\n");
        printf("Can you guess it?\n\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < 1 || guess > 100) {
                printf("Please enter a number between 1 and 100.\n");
                attempts--;
            } else if (guess < secret) {
                printf("Too low. Try higher.\n");
            } else if (guess > secret) {
                printf("Too high. Try lower.\n");
            } else {
                printf("\nCorrect! You guessed it in %d attempt(s).\n", attempts);

                if (attempts == 1) {
                    printf("Incredible! First try!\n");
                } else if (attempts <= 5) {
                    printf("Excellent performance!\n");
                } else if (attempts <= 10) {
                    printf("Good job!\n");
                } else {
                    printf("Keep practicing!\n");
                }
            }

        } while (guess != secret);

        printf("\nPlay again? (y/n): ");
        scanf(" %c", &play_again);

    } while (play_again == 'y' || play_again == 'Y');

    printf("\nThanks for playing. Goodbye!\n");
    printf("================================\n");

    return 0;
}