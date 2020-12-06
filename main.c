#include <stdio.h>
#include "myBank.h"
#include "myBank.c"

char choose ()
{
    char code;
    printf("Please choose a transaction type:\n");
    printf(" O - Open Account\n B - Balance Inquiry\n D - Deposit\n W - Withdrawal\n C - Close Account\n I - Interest\n P - Print\n E - Exit\n");
    scanf("%c",&code);
return code;
}

int main() 
{
    //char code;
    //printf("Please choose a transaction type:\n");
    //printf(" O - Open Account\n B - Balance Inquiry\n D - Deposit\n W - Withdrawal\n C - Close Account\n I - Interest\n P - Print\n E - Exit\n");
    //scanf("%c",&code);   
    //fflush(stdin); 
    char code = choose();
    while( code != 'E')
    {
        //fflush(stdin); 
        switch(code)
        {
            case 'O':
                O();
                break;
            case 'B':
                B();
                break;
            case 'D':
                D();
                break;
            case 'W':
                W();
                break;
            case 'C':
                C();
                break;
            case 'I':
                I();
                break;
            case 'P':
                P();
                break;
            case 'E':
                E();
                break;
            default:
                printf("Invalid transaction type\n");
        }        
    code = choose();
    }
}
