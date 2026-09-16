#include<stdio.h>
int main()
{
    printf("enter the value of two digit number");
    int number;
    scanf("%d", &number);
    int tens, ones,sum, product;
    tens = number/10;
    ones = number%10;
    sum = tens + ones;
    product = tens * ones;
    if (sum + product == number){
        printf("number is special number");
    }
    else{
        printf("number is not special number");
    }
}