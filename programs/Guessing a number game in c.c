#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   int number,guess,numguesses=1;
    srand(time(0));
    number=rand()%100+1;
    do
    { printf("Guess a number between 1 to 100:");
      scanf("%d",&guess);
      if(guess>number){
        printf("Your guess is wrong \nPlease enter lower number\n");
      }
      else if(guess<number){
        printf("Your guess is wrong \nPlease enter a greater number\n");
      }
      else{
        printf("Congrats! You have guessed it correct\n");
        printf("The number of attempts you've taken to guess the correct number is %d times ",numguesses);
      }
      numguesses++;
    } while (guess!=number);
    return 0;
}
