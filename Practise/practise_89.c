#include <stdio.h>
// A format to store bank accounts of various indiviual in a bank
typedef struct 
{
    int accountNumber;// This is used to to keep indiviual bank account unique from others
    char Name;// Account holder name
    char gender;// M for male F for female
    char phone[15];// phone number of account holder
    char address[100];//Address of account holder
    float balance;// Amount of money present in holder's account
}BankAccount;
BankAccount account[5];// Can store five accounts
int main() {
     return 0;
}