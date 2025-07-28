#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>//This is going to add functions for testing and converting characters

// Declaring variables Globally
char Tic_Tac_Toe[3][3] = {{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}}, choice;
int row, col;

// Prototypes
char marker, computerMarker;
void welcomeScreen();
void howtoplay();
void firstMove();
void secondMove();
void board();
void computerMove(char marker);
void playerMove(char marker);
int winChecking(char marker);
int Draw();
void Reset();

// Definations of previously made prototypes
void welcomeScreen() // Welcome screen for the game
{
    printf("\n"); // upper border
    for (int i = 0; i < 15; i++)
        printf("X O ");
    for (int j = 0; j < 5; j++) // Middle
    {
        if (j == 2)
            printf("\n|                  T I C - T A C - T O E                  |");
        else if (j == 4)
            printf("\n|                                             PULKIT BHATT|");
        else
            printf("\n|                                                         |");
    }
    printf("\n");
    for (int i = 0; i < 15; i++) // Lower Border
        printf("X O ");
}
void howtoplay()
{ // for how to play and making of a board and also for the rules of the game
    printf("\n\n");
    char displayBoard[6][6] = {// This is to show how the player is going to play his/her game by stating each row and coloumn number
                               {'C', 'O', 'L', 'U', 'M', 'N'},
                               {'|', '*', '0', '1', '2', '|'},
                               {'R', '0', 'O', 'X', 'O', 'R'},
                               {'O', '1', 'X', 'X', 'X', 'O'},
                               {'W', '2', 'O', 'X', 'O', 'W'},
                               {'|', '*', '0', '1', '2', '|'}};
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            printf(" %2c", displayBoard[i][j]); // This will print board in the form of 6*6 matrix on console
        }
        printf("\n");
    }
    printf("\n\nHOW TO PLAY:\n"); // These are general rules for how to play the game
    printf("1. This board is a 3*3 matrix.\n");
    printf("2.  This board shows how to refer to positions:\n"
           "Example: Row 0 Col 2 -> You will type: 0 2\n");
    printf("3. You will enter the row and column number where you want to play (Separated with space).\n");
    printf("4. The row and column number should be between 0 and 2.\n");
    printf("5. You will play alternatively.\n");
    printf("6. The first player to get 3 of their markers in a row, column, or diagonal wins the game.\n");
    printf("7. If all the positions are filled and no player has won, then the game is a draw.\n");
}
void firstMove() // If the player choosed to make a move first
{
    printf("You are playing first. Make a move:\n");
    board();
    playerMove(marker);
    board();
    computerMove(computerMarker);
    board();
}
void secondMove() // If player choosed to make a second move
{
    printf("Alright\n");
    computerMove(computerMarker);
    board();
    printf("Computer has played its first move. It's your turn now.\n");
}
void board() // This board will keep on updating after each game
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %2c", Tic_Tac_Toe[i][j]);
        }
        printf("\n"); // This will change the line after each row
    }
}
void computerMove(char marker) // This is made so that computer can make its own move
{
    printf("Computer is making its move...\n");
    do
    {
        if (Tic_Tac_Toe[1][1] == '.') // Strategic move for computer
        {
            row = 1;
            col = 1;
            break;
        }
        if (Tic_Tac_Toe[0][0] == '.') // Strategic move for computer
        {
            row = 0;
            col = 0;
            break;
        }
        if (Tic_Tac_Toe[0][2] == '.') // Strategic move for computer
        {
            row = 0;
            col = 2;
            break;
        }
        if (Tic_Tac_Toe[2][0] == '.') // Strategic move for computer
        {
            row = 2;
            col = 0;
            break;
        }
        if (Tic_Tac_Toe[2][2] == '.') // Strategic move for computer
        {
            row = 2;
            col = 2;
            break;
        }
        row = (rand() % 3); // This will generate random number for row
        col = (rand() % 3); // This will generate random number for column
    } while (Tic_Tac_Toe[row][col] != '.');
    Tic_Tac_Toe[row][col] = marker;
}
void playerMove(char marker) // This is made so that player can make their move error checking is also added to it

{
    while (1)
    {
        printf("Make a move\n");
        scanf("%d %d", &row, &col);
        if (row < 0 || row > 2 || col < 0 || col > 2 || Tic_Tac_Toe[row][col] != '.') // To check if player entered wrong row/column number
        {
            printf("Wrong Row/Coloumn Entered. Please try again.\n");
        }
        else
        {
            break;
        }
    }
    Tic_Tac_Toe[row][col] = marker; // This will help updating the move made by player in the board
}
int winChecking(char marker)
{ // This checks if someone has won the game or not
    for (int i = 0; i < 3; i++)
    {
        if (Tic_Tac_Toe[i][0] == marker && Tic_Tac_Toe[i][1] == marker && Tic_Tac_Toe[i][2] == marker) // Checks for each row of the board
            return 1;
        if (Tic_Tac_Toe[0][i] == marker && Tic_Tac_Toe[1][i] == marker && Tic_Tac_Toe[2][i] == marker) // Dhecks for each col of the board
            return 1;
    }
    if ((Tic_Tac_Toe[0][0] == marker && Tic_Tac_Toe[1][1] == marker && Tic_Tac_Toe[2][2] == marker) || // Checks for each diagonal of the board
        (Tic_Tac_Toe[0][2] == marker && Tic_Tac_Toe[1][1] == marker && Tic_Tac_Toe[2][0] == marker))
        return 1;
    return 0;
}
int Draw() // For draw situtation
{
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            if (Tic_Tac_Toe[row][col] == '.') // This means that there are still some moves left
            {
                return 0;
            }
        }
    }
    return 1; // No moves left now
}

void Reset()
{ // To reset the board after each game
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            Tic_Tac_Toe[i][j] = '.';
}
// Main program starts from here
int main()
{
    welcomeScreen();
    howtoplay();
    srand(time(NULL)); // seeds random number generator
    do
    {
        Reset();
        // Let the player choose their marker
        printf("\n\nWhat you want X or O\n");
        scanf("%c", &marker);
        marker = toupper(marker);
        if (marker == 'X') // If player chooses X
        {
            computerMarker = 'O';
        }
        else if (marker == 'O') // If player chooses O
        {
            computerMarker = 'X';
        }
        else // Edge case if player enters any other character
        {
            printf("Invalid marker. Please try again.\n");
            continue;
        }
        // To give choice to player if he/she want to play first
        printf("Want to play first? (Y/N)\n");
        scanf(" %c", &choice);
        choice = toupper(choice);
        if (choice == 'Y')
        {
            firstMove();
        }
        else if (choice == 'N')
        {
            secondMove();
        }
        else // Edge case if player enters any other character
        {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        while (1)
        {
            playerMove(marker);
            board();
            if (winChecking(marker))
            {
                printf("You have won the game!\n");
                break;
            }
            if (Draw())
            {
                printf("It's a draw!\n");
                break;
            }

            computerMove(computerMarker);
            board();
            if (winChecking(computerMarker))
            {
                printf("Computer has won the game!\n");
                break;
            }
            if (Draw())
            {
                printf("It's a draw!\n");
                break;
            }
        }
        // To make choice if he/she want to continue playing
        printf("Do you want to play again? (Y/N): ");
        scanf(" %c", &choice);
        choice = toupper(choice);
    } while (choice == 'Y');
    // Exiting game
    printf("Thanks for playing!\n");
    return 0;
}
