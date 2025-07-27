#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    char Tic_Tac_Toe[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}},choice;
    int row, col;
    printf("Want to play first or shall I???\n");
    scanf("%c",&choice);
    if(choice=='y'|| choice=='Y'){
        printf("You are playing first. Make a move:\n");
        for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c",Tic_Tac_Toe[i][j]);
            if(j==2)
            printf("\n");
        }
    }

    printf("In which row and which coloumn you want to place. Enter it separated by space\n");
    scanf(" %d %d",&row,&col);
    Tic_Tac_Toe[row][col]='X';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c",Tic_Tac_Toe[i][j]);
            if(j==2)
            printf("\n");
        }
} 
}

else{
    printf("You are playing second. Make a move:\n");
    do
    {row=(rand()%3);
    col=(rand()%3);
    } while (Tic_Tac_Toe[row][col]!='.');
    Tic_Tac_Toe[row][col]='O';
    printf("Computer has played its first move its your turn now.\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c",Tic_Tac_Toe[i][j]);
            if(j==2)
            printf("\n");
        }
    }
}
     return 0;
}