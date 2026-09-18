#include <stdio.h>
void main()
{
    printf("enter the vlue of temprature in degree celcius");
    float c,f;
    scanf("%f", &c);
    f = (9.0/5.0)*c+32;
    printf("value of temprature in farenheit is %fF\n", f);
if (f>= 212){
    printf("the temprature is above the boiling point of water");
}
else if(f<=32){
    printf("the temprature is below the freezing point of water");
}
else{
    printf("temprature is between the boiling and freezing point of water");
}
}