#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char Tic_Tac_Toe[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}},choice;
int row, col;
void board();
void computerMove();
void playerMove();

void board(){
for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c",Tic_Tac_Toe[i][j]);
            if(j==2)
            printf("\n");
        }
    }
}
void computerMove(){
    printf("Computer is making its move...\n");
    do
    {row=(rand()%3);
    col=(rand()%3);
    } while (Tic_Tac_Toe[row][col]!='.');
    Tic_Tac_Toe[row][col]='O';
}
void playerMove(){
    printf("Make a move\n");
    scanf(" %d %d",&row,&col);
    Tic_Tac_Toe[row][col]='X';
}
int main() {
    srand(time(NULL));
    printf("Want to play first or shall I???\n");
    scanf(" %c",&choice);
    if(choice=='y'|| choice=='Y'){
        printf("You are playing first. Make a move:\n");
        board();
    printf("In which row and which coloumn you want to place. Enter it separated by space\n");
    scanf(" %d %d",&row,&col);
    Tic_Tac_Toe[row][col]='X';
    board();
    computerMove();
    board();
    playerMove();
    board();
    if((Tic_Tac_Toe[0][0]=='X'&&Tic_Tac_Toe[0][1]=='X'&&Tic_Tac_Toe[0][2]=='X')||(Tic_Tac_Toe[1][0]=='X'&&Tic_Tac_Toe[1][1]=='X'&&Tic_Tac_Toe[1][2]=='X')||(Tic_Tac_Toe[2][0]=='X'&&Tic_Tac_Toe[2][1]=='X'&&Tic_Tac_Toe[2][2]=='X')||(Tic_Tac_Toe[0][0]=='X'&&Tic_Tac_Toe[1][0]=='X'&&Tic_Tac_Toe[2][0]=='X')||(Tic_Tac_Toe[0][1]=='X'&&Tic_Tac_Toe[1][1]=='X'&&Tic_Tac_Toe[2][1]=='X')||(Tic_Tac_Toe[0][2]=='X'&&Tic_Tac_Toe[1][2]=='X'&&Tic_Tac_Toe[2][2]=='X')||(Tic_Tac_Toe[0][0]=='X'&&Tic_Tac_Toe[1][1]=='X'&&Tic_Tac_Toe[2][2]=='X')||(Tic_Tac_Toe[0][2]=='X'&&Tic_Tac_Toe[1][1]=='X'&&Tic_Tac_Toe[2][0]=='X')){
        printf("You have won the game.\n");
    }
}

else{
    printf("You are playing second. Make a move:\n");
    computerMove();
    printf("Computer has played its first move its your turn now.\n");
    board();
    playerMove();
    board();
}
     return 0;
}