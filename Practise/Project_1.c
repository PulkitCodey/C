// My first project on Guess Game
#include <stdio.h>
#include <stdlib.h> // this is added to include the rand() and srand() functions
#include <time.h>   // This is added to include the time function for random number generation (time())
int main()
{
  char choice;
  srand(time(NULL)); // (srand) is used to seed the random number generator with the current time. This is only done once at the start of the program to ensure that the random numbers generated are different each time the program is run.
  int Rn = 0, i = 0; // This is done to remove garbage values
  puts("##########Welcome to the Guessing Game##########");
  puts("HERE'S A GUESS GAME FOR YOU. SOUNDS INTERSTING RIGHT. \n"
       "-->THE RULES ARE SIMPLE. YOU HAVE TO GUESS A NUMBER BETWEEN 1 TO 100. \n"
       "-->YOU CAN MAKE AS MANY GUESSES AS YOU WANT. \n"
       "-->IF YOU WANT TO EXIT THE GAME, JUST ENTER 0.\n"
       "-->LET'S SEE HOW MANY TRIES IT TAKES FOR YOU TO GUESS THE RIGHT NUMBER.\n");

  do // I made use of while loop so that program will run atleast once and choice of exiting game could come at the last once the loop finishes
  {
    int No_of_tries = 0;     // Resetting the number of tries for each new game
    Rn = (rand() % 100) + 1; // rand function generates a random number between 0 and RAND_MAX, which is then scaled to the range of 1 to 100 and shifted by 1 to ensure it is always at least 1.
    /*

                                              #### Visual Diagram of this code####

                                Input -> Is input 0? --> Yes --> Exit game
                                      |
                                      --> Is input in range 1-100? --> No --> Print warning + continue (go back to input)
                                      |
                                      --> Valid input --> Add to tries
                                                        --> Compare with secret number
                                                        --> Too high? Too low? Correct?
                                                        --> If correct does user want to play again or not?
                                                        --> Final messasge to user if he wants to quit
This is how this code is going to run
    */

    while (1)
    { // Loop inside loop this is done so that player could make choices till finally make a correct one and also to check if user made a valid guess

      // Taking input from user------------------------------------------------------
      printf(" Guess a number (or 0 to quit):-");
      scanf("%d", &i); // This should be done only one time cause while loop is already set to (1)
      //---------------------------------------------------------------------------

      // Checking if the choice made is valid or not-------------------------------------
      if (i == 0)
      {
        puts("You entered 0. Exiting the game.");
        break;
      }
      if (i < 1 || i > 100)
      {
        puts("Please enter a valid number between 1 to 100");
        continue;// This is done so that if this if code block of (if) runs everything under continue will be skipped and the code will start over again from where input for valid number is asked
      }
      else
      {
        puts("You made a guess. Let's see if it's correct or not");
      }
      //----------------------------------------------------------------

      // Summing up number of guesses-------------------------------------------

      No_of_tries++;

      //------------------------------------------------------------------------

      // Checking if guess made by user is correct or not-----------------------------------
      if (i > Rn)
      {
        puts("Hmm, Seem like you made a guess higher then the number. Try Again!!!");
      }
      else if (i < Rn)
      {
        puts("Nahh, You made a lower guess. Make another one!!!");
      }
      else if (i == Rn)
      {
        puts("Damnnn! You did it Congrats :)");
        printf("Number of tries made for guessing correct number:-%d\n", No_of_tries);
        break;
      }
      //-----------------------------------------------
    }
    // Game restarter-----------------------------------
    puts("Want to play again?? Y for yes and N for No");
    scanf(" %c", &choice);
    if (choice != 'N' && choice != 'n' && choice != 'Y' && choice != 'y')
    { // If non of these would match game will quit with invalid choice made message (&&) is used so that if can check if any of these are matching or not
      puts("Invalid Choice! Exiting Game");
      break;
      //-----------------------------------------------------
    }
  }while (choice == 'Y' || choice == 'y');
    // if choice made matches (Y) or (y) game will restart
  
    // Final messasage-----------------------------------------------------
    puts("Thanks for playing Exiting Game");
    //-----------------------------------------------------------------------
    return 0;
  }