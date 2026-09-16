#include<stdio.h>
int main()
{
    int number, hundreds, tens, ones, temp;
    printf("enter the value of three digit number: ");
    scanf("%d", &number);
    hundreds = number/100;
    temp = number%100;
    tens = temp/10;
    ones = temp%10;
    printf("hundreds place is: %d\n", hundreds);
    printf("tens place is: %d\n", tens);
    printf("ones place is: %d\n", ones);
    printf("number reversed is %d%d%d\n", ones, tens, hundreds);
}