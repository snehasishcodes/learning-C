/*
rock paper scissors with funcs
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// func prototypes
int computersChoice();
int usersChoice();

int main(void) {
  int comp = computersChoice();
  int user = usersChoice();

  while (user > 3 || user < 1) {
    printf("Cuh what ya chosing, choose between 1 to 3\n");
    user = usersChoice(); // call ts func again cuz the user cant understand
                          // simple instructions cuh
  }

  int res = (user - comp + 3) % 3; // ts crazy formula kinda for RPS damn

    if(res == 0) {
        printf("Its a tie!\n");
    }
    else if(res == 1) {
        printf("You chose %d, Computer chose %d, You win!", user, comp);
    }
    else if(res == 2) {
        printf("You chose %d, Computer chose %d, Computer wins!", user, comp);
    }

  return 0;
}

int computersChoice() {
  srand(time(NULL));
  return (rand() % 3) + 1;
}

int usersChoice() {
  int choice = 1; // default choice or sum shi
  printf("Enter yo choice cuh\n");
  printf("1 for rock\n");
  printf("2 for paper\n");
  printf("3 for scissoring\n");
  printf("YOur choice: ");

  scanf("%d", &choice);

  return choice;
}
