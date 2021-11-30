#include <stdio.h>

int main() {
int a,count=1;
printf("Enter the number ");
scanf("%d",&a);
while(a>=10 || a<=-10){
	a=a/10;
	count++; 
} 
printf("Number of digits:%d",count); 
}


