#include <stdio.h>
int main(){
    printf("\n*****This is the start of learning of C language***** \n\n #Types of data types#\n\n There are primarly 3 types of data types which are \n   Int - Used to store integer value\n   float- Used to store decimal places\n   char- Used to store single character\n\n NOTE:- Use of these is done is code you can check it.");
    const int a = 69; // 2 to 4 bytes
    const float b = 169.96; // 4 bytes
    const char c = 'X'; // 1 byte
    printf("\n\n#Printing of data types in codes#\n\nTo print the value of assigned data type we use %%d or %%i for int, %%f for float, and %%c for char. Here we are printing there values for int, float and char \n Value assigned to a under int data types = %d",a);
    printf("\n Value assigned to b under data types float = %f", b);
    printf("\n Value assigned to c under data types char = %c",c);
    printf("\n\nThere are some more data types but before moving forward I want to tell you that you can comment out things which won't be considered in code and will be ignored which is COMMENT.\n There are two types of comment.\n  Single-Line comment- Can be used by using two backslash (//) \n  Multi-Line comment- Can be used by adding a blackslash and a star at starting of comment and at the end adding a star and blackslash at last of end of comment(/* */).");
    printf("\n\nNow moving forward we have different types of data types which come under these main ones which are:- short:- Can be used to store numbers upto -32,768 to +32,767 \n long:- Can be used to store no. from -2,147,483,648 to +2,147,483,647 which is almost same as that of int \n long long:- Can be used to store no. -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807 \n double:- This is used to add numbers after decimal upto 15~17 decimal places\n long double:- This is used to add numbers after decimal upto 19~21 decimal places.\n To just positive values we can use unsigned with these to make the use of positive no. only.\n Use of these are done in code\n\n");
    short d = 30000;
    long  e = 2147483647;
    long long  f = 9223372036854775807;
    double  g =12.123456789123456;
    long double h =13.123456789123456789L;
    printf("Now moving foward but wait do you wanna know how much memory does all these data types take in your system alright you can use sizeof function (in bytes)");
    printf("The size of int is %d\n", sizeof(int));
    printf("The size of float is %d\n", sizeof(float));
    printf("The size of char is %d\n", sizeof(char));
    printf("The size of short is %d\n", sizeof(short));
    printf("The size of long is %d\n", sizeof(long));
    printf("The size of long long is %d\n", sizeof(long long));
    printf("The size of double is %d\n", sizeof(double));
    printf("The size of Long double is %d\n", sizeof(long double));
    
    printf("Well there is one thing we are encountering in printing floating values that it is printing upto 6 decimal places or if we use double it will print upto 15~17 decimal places and if if use long double it will show even more but we can change that by using %.nf where n is the no. of decimal places you want to print.\n\n");
    
    printf("Lets extracting the value of one of used data type upto 5 decimal places b=%.5f  g=%.5f\n\n",b, g); //I didn't use h here because it is long double and we will use %Lf for that but my architecture doesn't support long double.

    printf("Now lets move forward and understand types of operators in C");

    return 0;
}
// This is single line comment
/*This is multi line comment 
Can be used in for multiple line comments these are very useful in writing codes so that you can keep a note of what you have done in past.
123456789
!@#$%^&*()_+-=|{}[]:"
<>"? ''
*/