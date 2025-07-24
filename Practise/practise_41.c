#include <stdio.h>
//This is made to print * in half pyramid form
void stars(){
    printf("*");//This is made to keep main code clean
}

int main() {
    int number_of_lines;
    printf("How many lines do you want to print. Tell me:-");
    scanf("%d",&number_of_lines);
    for (int i = 0; i < number_of_lines; i++)//This loop controls number of lines
    {//What actually happens is first i is declared and intialised to be 0 then condition will be checked if it mets then we enter outside (for) loop. Now there is another (for) loop inside so it will run now. j will be declared and intialised then condition will be checked if it mets then one star will be printed and value of j will be increased by increment operator then again condition will be checked if it doesn't met we will exit inside (for) loop then there is a escape line operator in outer (for) loop so a new line will be added and i value will be increased by increment operator. And this will keep on going till the outer for loop condition becomes false
    for (int j = 0; j < 2*i+1; j++)//This loop controls number of stars
    stars();
    printf("\n");
    }
     return 0;
}