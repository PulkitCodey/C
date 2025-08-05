#include <stdio.h>
//A code to compare dates
typedef struct 
{
    int day;
    int month;
    int year;
}date;
int dateCompare(date d1,date d2){// This is logic to if a date or a month or a year is ahead of another 
    if (d1.year > d2.year) return 1;
    if (d1.year < d2.year) return -1 ;
    if (d1.month > d2.month) return 1;
    if (d1.month < d2.month) return -1 ;
    if (d1.day > d2.day) return 1;
    if (d1.day < d2.day) return -1 ;
    return 0;
}

int main() {
    date d1,d2;
    printf("Enter first date dd mm yy (separated by space)\n");
    scanf("%d %d %d",&d1.day , &d1.month , &d1.year);
    printf("Enter second date dd mm yy (separated by space)\n");
    scanf("%d %d %d",&d2.day , &d2.month , &d2.year);
    int result = dateCompare(d1,d2);// Here the value which will be returned is going to be stored in result
    if (result==1)// If we tried to compare date directly with date compare then it will be like we are comparing pointer to a integer which is wrong we can't do that
    printf("First date is later \n");
    else if(result==-1)
    printf("Second date is later\n");
    else
    printf("Both dates are equal\n");
    
     return 0;
}