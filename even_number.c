// to check if number given is even or odd
#include <stdio.h>
int main()
{
    printf("enter the value of the number: ");
    int a;
    scanf("%d", &a);
    if (a%2==0){
        printf("the number is even");
    } else {
        printf("the number is odd");
    }
return 0;
}