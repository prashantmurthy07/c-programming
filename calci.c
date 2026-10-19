#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
	printf("\t\t CALCULATOR\n\n");
	printf("enter an expression\n");
	float a,b,res; char op;
	scanf("%f%c%f", &a, &op, &b);
	switch(op){
		case '+' : res = a+b;
		break;
		case '-' : res = a-b;
		break;
		case '*' : res = a*b;
		break;
		case '%' : res = (int)a%(int)b;
		case '/' : 
		if(b==0){
			printf("invalid, devision with zero isnt possible");
		}
		else{
			res = a/b;
			break;
		}
		case '^' : res = pow(a,b);
		break;
		default : printf(" invalid expression. please enter valid expression.");
		exit(0);
		}
		printf("the result of expression is %f%c%f = %f", a, op, b, res);
		        
	}
	