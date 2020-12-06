#include <stdio.h>
#include "myBank.h"
double bankAccount [50][2];
int count=1, open = 1, close = 0;

void O ()
{
    double money;
    if (count<=50)
        {
            bankAccount[count][0] = open;
            printf("Pls enter amount for deposit: ");
            scanf("%lf", &money);
            bankAccount[count][1] = money;
            printf("New account number is: %d \n", count+900);
            count++;
        }
    else 
        {
        printf("there is no account available now \n");
        }
        while(getchar()!='\n');
}

void B ()
{
    int account;
    printf("Pls enter account number: ");
    scanf("%d", &account);
    if(bankAccount[account-900][0] == close)
    {
        printf("This account is closed\n");
    }
    else
    {
       printf("The balance of account number %d is: %.2f \n", account, bankAccount[account-900][1]); 
    }
    while(getchar()!='\n');
}

void D ()
{
    double money;
    int account;
    printf("Pls enter your number account \n");
    scanf("%d", &account);
   if (bankAccount[account-900][0] == open)
   {
       printf("Pls enter amount for deposit:\n");
       scanf("%lf", &money);
       if (money<0)
       {
           printf("Unable to add negative number to balance");
       }
       bankAccount[account-900][1] += money; 
       printf("your sum is %.2f \n", bankAccount[account-900][1]);
   }
   else
   {
    printf("There is no such account \n");
   }
   while(getchar()!='\n');
}

void W()
{
    int account;
    double money;
    printf("Pls enter account number: ");
    scanf("%d", &account);
   if (bankAccount[account-900][0] == open)
   {
       printf("Pls enter the amount to withdraw: ");
       scanf("%lf", &money);
       if (bankAccount[account-900][1]-money >= 0)
       {
       bankAccount[account-900][1] -= money; 
       printf("The new balance is: %.2f ", bankAccount[account-900][1]);
       }
       else
       {
           printf("Unable to withdraw more than your account balance \n");
       }
   }
   else
   {
    printf("There is no such account \n");
   }
   while(getchar()!='\n');
}

void C()
{
    int account;
    printf("Pls enter account number: ");
    scanf("%d", &account);
    if (bankAccount[account-900][0]==open)
   {
       bankAccount[account-900][0] = close;
       printf("Your account has been closed \n", account);
   }
   else
   {
       printf("This account is already been closed \n");
   }
    while(getchar()!='\n'); 
}

void I()
{
    double interest;
    printf("Pls enter interest rate: ");
    scanf("%lf",&interest);
    for(int i=1; i<=50; i++)
    {
        if (bankAccount[i][0] == open)
        {
            bankAccount[i][1] = (bankAccount[i][1] *(interest/100)) + bankAccount[i][1];
        }
    }
    while(getchar()!='\n');
}

void P ()
{
    for(int i=1; i<=50; i++)
    {
        if(bankAccount[i][0] == open)
        {
            double x = (double)bankAccount[i][1];
            printf("The balance of account is %d is %.2lf \n", i+900, x);
        }
    }
    while(getchar()!='\n');
}

void E()
{
    for(int i=1; i<=50; i++)
        if (bankAccount[i][0] == open){
    
            bankAccount[i][0] == close;
        }
    while(getchar()!='\n');
}