# include <stdio.h>
int main()
{
printf("enter the value of principle, rate of intrest and time time taken: \n");
float p, r, t, si;
scanf("%f%f%f", &p, &r, &t);
si = p*r*t/100;
printf("the simple intrest is %f\n", si);
return 0;
}