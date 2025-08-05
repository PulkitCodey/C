#include <stdio.h>
//A code to compare times
typedef struct 
{
    int second;
    int minute;
    int hour;
}time;
int timeCompare(time t1,time t2){// This is logic  check if a second or a minute or an hour is ahead of another 
    if (t1.hour > t2.hour) return 1;
    if (t1.hour < t2.hour) return -1 ;
    if (t1.minute > t2.minute) return 1;
    if (t1.minute < t2.minute) return -1 ;
    if (t1.second > t2.second) return 1;
    if (t1.second < t2.second) return -1 ;
    return 0;
}

int main() {
    time t1,t2;
    printf("Enter first time hh mm ss (separated by space)\n");
    scanf("%d %d %d",&t1.hour , &t1.minute , &t1.second);
    printf("Enter second time hh mm ss (separated by space)\n");
    scanf("%d %d %d",&t2.hour , &t2.minute ,&t2.second );
    int result = timeCompare(t1,t2);// Here the value which will be returned is going to be stored in result
    if (result==1)// If we tried to compare time directly with timecompare then it will be like we are comparing pointer to a integer which is wrong we can't do that
    printf("First time is later \n");
    else if(result==-1)
    printf("Second time is later\n");
    else
    printf("Both times are equal\n");
    
     return 0;
}