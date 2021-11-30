#include<stdio.h>
#include<math.h>
int main(){
	int bin,dec,a;
	int count=0;
	printf("Enter binary number: ");
	scanf("%d",&bin);
	
	while(bin!=0){
			a=bin%10;
			bin=bin/10;
			dec=dec+(a*pow(2,count));
			count++;
	}
	printf("%d",dec);
}

