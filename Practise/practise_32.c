#include <stdio.h>
void WelcomeScreen()
{
    puts("Welcome to Calculator");
}
//----------------------------

// Addition-----------------
int sum(int a, int b)
{
    return a + b;
}
//-----------------------------

// Subtraction------------------
int subtract(int a, int b)
{
    return a - b;
}
//-------------------------------

// Multiplication------------------
int multiply(int a, int b)
{
    return a * b;
}
//-------------------------------

// Division------------------
float divide(int a, int b)
{
    return (float)a / b;
}
//-------------------------------

int main()
{
    // Program starts------------------------------------------------

    int i1 = 0, i2 = 0, choice = 0, r = 0; // This is done to remove garbage value
    float rf = 0;
    char finalchoice;
    WelcomeScreen(); // Don't use void again in code just give the name of the function
    do
    {
        printf("Supply two numbers seperated by space:-");
        scanf("%d %d", &i1, &i2); // We can take inputs in one line also by adding (space) between two format specifiers
        printf("What you want to do 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for division\n");
        scanf("%d", &choice);

        // Choice----------------------------------------

        // Using if

        //  if(choice==1){
        //  r = sum(i1,i2);
        //  }
        //  else if(choice==2){
        //  r = subtract(i1,i2);
        //  }
        //  else if(choice==3){
        //  r = multiply(i1,i2);
        //  }
        //  else if(choice==4){
        //  rf = divide(i1,i2);
        //  }

        // Using switch-case
        switch (choice) // this is used when we have to make choices between multiple options. It is used to make code more readable and easy to understand
        {
        case 1:
            r = sum(i1, i2);
            break;

        case 2:
            r = subtract(i1, i2);
            break;

        case 3:
            r = multiply(i1, i2);
            break;

        case 4:

            if (i2 == 0)
            {
                printf("Error: Division by zero!\n");
                break; // Skip the rest and go back to the top of loop
            }
            rf = divide(i1, i2);
            break;

        default:
            printf("Wrong choice made. Quiting Calculator");
            return 1;
        }
        // Result
        if (choice == 4 && i2 != 0) // Check if division was chosen and divisor is not zero
            printf("Result:- %.2f\n", rf);
        else if (choice == 1 || choice == 2 || choice == 3)
            printf("Result:- %d\n", r);
        printf("Want to calculate again (Y/N)");
        scanf(" %c", &finalchoice);
        if (finalchoice != 'Y' && finalchoice != 'y' && finalchoice != 'N' && finalchoice != 'n')
        {
            printf("Wrong choice made!!! Quiting");
            return 1;
        }
    } while (finalchoice == 'Y' || finalchoice == 'y');

    puts("Thanks for using calculator, Quiting");
    return 0;
}
