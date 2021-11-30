#include <stdio.h>
void input(int *,int *);
void output(int,int); 
 
int main() { 
	int a=0,b=0; 
	input (&a,&b);
	output(a,b); 
}
void input(int *x,int *y){
	printf("Enter two number ");
	scanf("%d%d",x,y); 
} 
void output(int m,int n){
	printf("Total:%d",m+n); 
} 
