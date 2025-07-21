#include <stdio.h>

int main() {
    puts("Wanna check if a year is leap year or not? Alright, tell me year and I will tell you");
    int y;
    puts("Enter year: ");
    scanf("%d",&y);
    if((y%100!=0 && y%4==0) || y%400==0){//Cause if a year is divisible by 100, it is not a leap year unless it is also divisible by 400
        //But if you are thinking of js checking divisibility by 4, then you are wrong cause it would include those years which are divisible by 100 and that is what we don't want like year 1900 its divisible by 4 but not a leap year so basic logic is if a year is divisible by 4 and not divisible by 100 but it could be divisible by 400 then it's a leap years js have to separate out those which are divisible by 100 and not by 400. Some think it would be easier if we take out those which are divisible by 400 but thats not what it sounds like cause we might leave alot of years in between like 2024 which is leap year but not divisible by 400 and if we js remove those which are divisible by 100 then it would leave unique years like 2000 which is leap year.
        puts("Its a leap year");
    }
    else{
        puts("Not a leap year");
    }
     return 0;
}