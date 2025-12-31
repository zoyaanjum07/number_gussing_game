#include <stdio.h>

int main() {
    int secret = 72;      // Fixed secret number
    int guess;
    int attempts = 5;

    printf(" Welcome to the Number Guessing Game!\n");
    printf("You have %d attempts to guess the number.\n", attempts);

    for (int i = 1; i <= attempts; i++) {
        printf("\nAttempt %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Congratulations! You guessed the correct number.\n");
            return 0;
        } 
        else if (guess < secret) {
            printf("Too Low!");
        } 
        else {
            printf("Too High!");
        }
    }

    printf("\n Game Over! You've used all attempts.\n");
    printf("The correct number was: %d\n", secret);

    return 0;
}