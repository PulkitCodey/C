#include <stdio.h>
#include <math.h>
// lets say someone take loan of about 10 lakhs  at rate of 9.5% and will return after 20 years. Have to find interst , monthly emi
void welcomeScreen (){
    printf("\n");//upper border
for (int i = 0; i <51; i++)
    printf("*");
 for (int j = 0; j < 5; j++) {
        if (j == 2)
            printf("\n|                  W E L C O M E                  |");
        else
            printf("\n|                                                 |");
 }
            printf("\n");
for (int i = 0; i <51; i++)
    printf("*");
}
float monthlyInterest(float a);
float monthlyInterest(float a){
    return (9.5/12)/100;
}
float emi(int a, float b, int c);
float emi (int a , float b , int c){
    return (a * b * pow(1+b,c*12))/(pow(1+b,c*12)-1);
}
int main() {
    welcomeScreen();
    int loanAmount=0, loanTime=0;
    float rate=0;
    char choice;
    printf("The Amount of your loan is:-\n");
    scanf("%d",&loanAmount);
    printf("The rate of interest for your loan is:-\n");
    scanf("%f",&rate);
    printf("Time period for which you have taken loan (in years):-\n");
    scanf("%d",&loanTime);
    printf("Your EMI of each month is going to be:- %.1f\n",emi(loanAmount,rate,loanTime));
    printf("There will be total of %d installments",loanTime*12);
    for (int i = 0; i < loanTime*12; i++)
    {
        printf("Want to see installments of first year");
        if(choice=='Y'|| choice =='y')
    }
    
    /*
    EMI= (P x R x (1+r)^N)/((1+r)N-1)​
*/
     return 0;
}