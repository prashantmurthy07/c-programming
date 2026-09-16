#include<stdio.h>
int main()
{
    int number, hundreds, tens, ones, temp;
    printf("enter the three digit number: ");
    scanf("%d", &number);
    hundreds = number/100;
    temp = number%100;
    tens = temp/10;
    ones = temp%10;
    if(hundreds == ones){
        printf("number is palindromic");
    }
    else {
        printf("number isnt palindromic");
    }
}