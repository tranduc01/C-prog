#include <stdio.h>
#include <math.h> 
int main() {
int a,sum;
int count=0;
printf("Enter the number ");
scanf("%d",&a);
if (a>0){
for (int i=1;i<a;i++){
	if (a%i==0){	
	sum=sum+i;
	count++; 
}
}
if (sum==a){
	printf("Perfect Number"); 
} else {
	for (int j=2;j<=sqrt(a);j++){
	if (a%j==0){
		count++; 
	} 
}
if (count==0){
	printf("Prime Number"); 
}
} 
}
 

return 0;
}


