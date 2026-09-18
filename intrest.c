#include<stdio.h>
void main()
{
    printf("enter the value of principal amount, rate of intrest, time");
    float p, r,t, si;
    scanf("%f%f%f", &p, &r, &t);
    si = p*r*t/100;
    p = p+si;
    printf("value of money with intrest is %f\n", p);
}