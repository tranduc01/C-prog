#include <stdio.h>

int main() {
int a,b,c;
printf("Enter 3 numbers ");
scanf("%d%d%d",&a,&b,&c);
if (a==b && b==c){
	printf("Min: %d",a); 
} else if (a<b && a<c){
	printf("Min:%d",a); 
} else if (b<a && b<c){
	printf("Min:%d",b);
} else {
	printf("Min:%d",c); 
} 

return 0;
}


