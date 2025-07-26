#include <stdio.h>
#include <math.h>
// This calculates monthly EMI for each month showing the principal part and interest part both

// Prototypes
void welcomeScreen();
float monthlyInterest(float);
float emi(int, float, int);
void Principal_interest_part(int, float, int);

//  Welcome Banner
void welcomeScreen()
{
    printf("\n"); // upper border
    for (int i = 0; i < 51; i++)
        printf("*");
    for (int j = 0; j < 5; j++)
    {
        if (j == 2)
            printf("\n|                  W E L C O M E                  |");
        else if (j == 4)
            printf("\n|                                     PULKIT BHATT|");
        else
            printf("\n|                                                 |");
    }
    printf("\n");
    for (int i = 0; i < 51; i++)
        printf("*");
}

// Monthly Interest
float monthlyInterest(float a)
{
    return (a / 12) / 100;
}

// EMI
float emi(int principal, float rate, int time_period)
{
    float r = monthlyInterest(rate);
    int totalMonths = time_period * 12;
    return (principal * r * pow(1 + r, totalMonths)) / (pow(1 + r, totalMonths) - 1);
}

// Breakdown of EMI for each month
void Principal_interest_part(int principal, float rate, int time_period)
{
    float tempPrincipal = principal;
    float monthlyEMI = emi(principal, rate, time_period);
    float monthlyRate = monthlyInterest(rate);
    int totalMonths = time_period * 12;
    for (int i = 0; i < totalMonths; i++)
    {
        float interstPart = (tempPrincipal * monthlyRate), principalPart = monthlyEMI - interstPart;
        printf("Month %d | Principal part %.2f | Interest part %.2f:- \n", i + 1, principalPart, interstPart);
        tempPrincipal -= principalPart;
        if (fabs(tempPrincipal) < 0.01) // This is done so that if the temp principal is lower than 0.01 then it stop calculating and helps keep error message away.
            tempPrincipal = 0;
    }
    float totalInterestPaid = (monthlyEMI * totalMonths) - principal;
    printf("\nTotal Interest Paid over %d years: %.2f\n", time_period, totalInterestPaid);
    float totalPaid = monthlyEMI * totalMonths;
    printf("Total Amount Paid to Bank: %.2f\n", totalPaid);
}

// Main Program
int main()
{
    welcomeScreen();
    int loanAmount = 0, loanTime = 0; // For removing garabage value
    float rate = 0;                   // For removing garabage value
    char choice;
    do
    {
        printf("\nEnter loan amount (e.g., 1000000 for 10 lakhs):-\n");
        scanf("%d", &loanAmount);
        printf("The rate of interest for your loan is:-\n");
        scanf("%f", &rate);
        printf("Time period for which you have taken loan (in years):-\n");
        scanf("%d", &loanTime);
        if (loanAmount <= 0 || rate <= 0 || loanTime <= 0) // Error Validation
        {
            printf("Please enter valid positive values for all inputs.\n");
            return 1;
        }
        printf("\n===========================================\n");
        printf("Monthly EMI:- %.2f\n", emi(loanAmount, rate, loanTime));
        printf("There will be total of %d installments", loanTime * 12);
        printf("\n===========================================\n");
        printf("Do you want to see the breakdown of your monthly installments? (Y/N):");
        scanf(" %c", &choice);
        if (choice == 'Y' || choice == 'y')
        {
            puts("Okay");
            Principal_interest_part(loanAmount, rate, loanTime); //  EMI = (P x R x (1+r)^N)/((1+r)^N-1)​
            printf("Want to calculate again (Y/N)");
            scanf(" %c", &choice);
        }
    } while (choice == 'Y' || choice == 'y');

    return 0;
}