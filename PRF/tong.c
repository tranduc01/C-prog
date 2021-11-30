#include <stdio.h>

int main() {
int a,b;
char c;
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("Enter the second number ");
	scanf("%d",&b);
	fflush(stdin);
	printf("Choose what you want ");
	scanf("%c",&c);
int result;
float result1; 

	switch(c)
{
	case '+': 
		result=a+b;
		printf("%d + %d = %d",a,b,result);
		break; 
	case '-': 
		result=a-b;
		printf("%d - %d = %d",a,b,result);
		break; 
	case '*': 
		result=a*b;
		printf("%d * %d = %d",a,b,result);
		break;   
	case '/': 
		result1 = (float)a/b;
		printf("%d / %d = %f",a,b,result1);
		break; 	 
	default: 
		printf("Error");	
}	
return 0;
}


