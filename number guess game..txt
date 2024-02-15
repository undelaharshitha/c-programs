


#include <stdio.h>

int main() {
  int guess, number, count = 0;

  // Generate a random number between 1 and 100.
  number = rand() % 100 + 1;

  // Start the guessing game.
  while (1) {
    // Get the user's guess.
    printf("Guess a number between 1 and 100: ");
    scanf("%d", &guess);

    // If the guess is correct, end the game.
    if (guess == number) {
      printf("You guessed the number correctly in %d guesses!\n", count);
      break;
    } else if (guess < number) {
      printf("Lower number please\n");
    } else {
      printf("Higher number please\n");
    }

    // Increment the number of guesses.
    count++;
  }

  return 0;
}
