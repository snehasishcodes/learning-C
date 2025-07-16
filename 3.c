/*
Number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  srand(time(NULL)); // set the seed (starting point) of the rand() func with current time

  int maxTries = 13; // maximum number of tries before the game is over
  int currentTries = 0;

  // generate a random num between 1-100 that the user needs to guess
  int minChosenNum = 1;
  int maxChosenNum = 100;
  int chosenNum = (rand() % (maxChosenNum - minChosenNum + 1)) + minChosenNum;

  printf("%d", chosenNum);

  int inputNum = 0; // user inputted number

  // checks if guessed number is eq to chosen num
  // if not enters the while loop until it matched
  // increments current tries by 1 everytime
  //
  do {
    printf("Guess the number between 1 and 100: ");
    scanf("%d", &inputNum);
    currentTries++;

    if (inputNum > chosenNum)
      printf("Choose something lower!\n");
    else if (inputNum < chosenNum)
      printf("Choose something higher!\n");
  } while (chosenNum != inputNum && currentTries < maxTries);

  if (currentTries >= maxTries && inputNum != chosenNum) {
    printf("Whoops you maxxed out the number of tries; you gotta retry blud");
  } else if (inputNum == chosenNum) {
    printf("Congrats you guessed it: %d\n", chosenNum);
  }

  return 0;
}
