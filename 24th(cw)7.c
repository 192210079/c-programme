#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess;
    srand(time(NULL));
    randomNumber = rand() % 100 + 1; // Generates a random number between 1 and 100

    printf("Guess the number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number!\n");
        }
    } while (guess != randomNumber);

    return 0;
}
//output : Guess the number between 1 and 100
Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 37
Too high! Try again.
Enter your guess: 31
Too high! Try again.
Enter your guess: 28
Too low! Try again.
Enter your guess: 30
Congratulations! You guessed the number!
//