#include <stdio.h>
#include <math.h>
#include<stdlib.h>
void main()
{
    float a, b, c, d, root1, root2, real, img;
    printf("enter the values of a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    if(a==0){
        printf("its not a quadratic equation");
        exit(0);
    }
    d = b*b-(4*a*c);
    if(d==0){
        printf("roots are real and equal\n");
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        printf("root1 = %.2f\n", root1);
        printf("root2 = %.2f\n", root2);
    }
    else if(d>0){
        printf("roots are real and distinct\n");
        root1 = (-b + sqrt(d))/(2*a);
        root2 = (-b - sqrt(d))/(2*a);
        printf("root1 = %.2f\n", root1);
        printf("root2 = %.2f\n", root2);
    }
    else {
        printf("roots are imaginary \n");
        real = -b/(2*a);
        img = sqrt(fabs(a))/(2*a);
        printf("root1 = %.2f + %.2fi \n", real, img);
        printf("root2 = %.2f - %.2fi \n", real, img);
    }
}
