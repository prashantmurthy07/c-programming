#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    float r1,r2,D,real,img;
    printf("enter the values of a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
if (a == 0){
    printf("equation is not a quadratic equation");
    exit(0);
}
D = b*b-4*a*c;
if (D == 0) {
    printf("equation has two real and equal roots");
    r1 = -b/(2*a);
    r2 = -b/(2*a);
    printf("the root of this euation is: %.2f\n", r1);
}
if (D<0){
    printf("the equation has imaginary roots and are conjugate");
    real = -b/(2*a);
    img= sqrt(fabs(D))/(2*a);
    printf("the value of the roots are %.2f+%.2fi\n the value of the roots are %.2f-%.2fi\n", real, img, real, img);
}
else {
    printf("the equation has two distinct roots\n");
    r1 = -b+sqrt(D)/(2*a);
    r2 = -b-sqrt(D)/(2*a);
    printf("the values of the roots are %.2f\t %.2f", r1, r2);
}
}