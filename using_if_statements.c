// using if statements to determine if someone qualified gate or not.
#include <stdio.h>
int main()
{
int score;
printf("enter the total score in gate out of hundred: ");
scanf("%d", &score);
if (score >= 25)
{
    printf("succesful");
}
else 
{
    printf("better luck next time!");
}
}