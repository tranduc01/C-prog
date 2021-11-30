#include <stdio.h>
#include<math.h> 
int main() {
int a[100],n;
printf("Enter the number in the array ");
scanf("%d",&n);
for (int i=0;i<n;i++){
	printf("",i);
	scanf("%d",&a[i]);
}
int count=0; 
for (int i=0;i<n;i++){
	for (int j=2;j<=sqrt(a[i]);j++){
		if (j%2==0){
			count++;
		}
	}
	if (count==0){	
	printf(" %d",a[i]);
	} 	
	
}



return 0;
}


