#include <stdio.h>
void main()
{
	printf("enter three integers: ");
	int a,b,c;
	scanf("%D%d%d", &a, &b, &c);
	if(a>b && a>c){
		if(b>c)
		printf("ascending order is %d<%d<%d", c,b,a);
		else
		printf("ascending order is %d<%d<%d", b, c,a);
	}
	else if (b>a && b>c){
		if(c>a)
		printf("ascending order is %d<%d<%d", a,c,b);
		else
		printf("ascending order is: %d<%d<%d ", c, a, b);
	}
	else{
		if(a>b)
		printf("ascending order is %d<%d<%d", b,a,c);
		else
		printf("ascending order is %d<%d<%d", a,b,c);
	}
}