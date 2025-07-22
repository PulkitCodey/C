#include <stdio.h>
#include <stdlib.h> // this is added to include the rand() and srand() functions
#include <time.h>// This is added to include the time function for random number generation
int main() {
    char choice;
    srand(time(NULL));// srand is called to seed the random number generator with the current time
    int Rn=0, i=0;// This is done to remove garbage values
    puts("##########Welcome to the Guessing Game##########");
      puts("HERE'S A GUESS GAME FOR YOU. SOUNDS INTERSTING RIGHT. \n"
           "THE RULES ARE SIMPLE. YOU HAVE TO GUESS A NUMBER BETWEEN 1 TO 100. \n"
           "YOU CAN MAKE AS MANY GUESSES AS YOU WANT. \n"
           "IF YOU WANT TO EXIT THE GAME, JUST ENTER 0.\n"
           "LET'S SEE HOW MANY TRIES IT TAKES FOR YOU TO GUESS THE RIGHT NUMBER.\n");

    do
    {
      int No_of_tries=0; // Resetting the number of tries for each new game
      Rn=(rand() % 100)+1;// rand function generates a random number between 0 and RAND_MAX, which is then scaled to the range of 1 to 100 and shifted by 1 to ensure it is always at least 1.
      /*
      */
      printf(" What you think could be the number. Guess it and answer here:-");
      scanf("%d",&i);
     while(1){
      if(i<1 || i>100){
        puts("Please enter a number between 1 to 100");
        scanf("%d",&i);
      }
      else if(i==0){
        puts("You entered 0. Exiting the game.");
        return 0;
      }
      else if(i>100){
        puts("You entered a number greater than 100. Please enter a number between 1 to 100");
        scanf("%d",&i);
      }
      else if(i<1){
        puts("You entered a number less than 1. Please enter a number between 1 to 100");
        scanf("%d",&i);
      }
      else
      {
        puts("You made a guess. Let's see if it's correct or not");
      }
      if(i>Rn){
        puts("Hmm, Seem like you made a guess higher then the number. Try Again!!!");
        No_of_tries++;
        scanf("%d",&i);
      }
        else if(i<Rn){
        puts("Nahh, You made a lower guess. Make another guess!!!");
        No_of_tries++;
        scanf("%d",&i);
        }
        else if (i==Rn)
        {
          if(No_of_tries==0){
          No_of_tries++;
        }
          puts("Damnnn! You did it Congrats :)");
          printf("Number of tries made for guessing correct number:-%d\n",No_of_tries);
          break;
        }
     }
        puts("Want to play again?? Y for yes and N for No");
        scanf(" %c",&choice);
    } while (choice =='Y'|| choice == 'y');
    puts("Exiting Game");
     return 0;
}