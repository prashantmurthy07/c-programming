// generate code to swap two numbers without using a third variable
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter the values of numbers");
    scanf("%d%d", &num1, &num2);
    printf("the values of the numbers before swapping is in: %d%d\n", num1, num2);
    num1 = num1 * num2;
    num2 = num1 / num2;
    num1 = num1 / num2;
    printf("the values of the numbers swapped in: %d%d\n", num1, num2);
}