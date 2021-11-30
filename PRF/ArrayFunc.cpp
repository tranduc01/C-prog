#include <stdio.h>
#include <stdlib.h>
#define size 1000 

void input(int a[size],int &n){
	printf("Enter the number element of the array: ");
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		printf("Enter mark: ");
		scanf("%d",&a[i]);	 
	}
} 
void output(int a[size],int n){
	for(int i=0;i<n;i++){
		printf(" %d ",a[i]); 
	} 
} 
void sort(int a[size],int &n){
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    } 
    for (int i=0;i<n;i++) {
        printf(" %d ",a[i]);
    }
}
void max(int a[size], int &n){
	int max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i]; 
		} 
	}
	for(int j=0;j<n;j++){
		if (a[j]==max){
			printf("(%d,%d) ",j,max);
		} 
	} 
 	 
}

void add(int a[size],int &n){
	int pos,x;
	do{
	
	printf("\n5. Enter the value to add: ");
	scanf("%d",&x); 
	printf("Enter the position you want to add: ");
	scanf("%d",&pos);	 
	if (pos>=0 && pos<=n){
		for(int i=n;i>pos;i--){
			a[i]=a[i-1];
		}			
			a[pos]=x; 
			++n;  
		break; 
		}else {
			printf("\nOOPS ERROR !!!!!"); 
			printf("\nPlease enter again"); 
	}
} while (true); 
} 
void del(int a[size],int &n){
	int pos; 
	do{
	printf("\n6. Enter the position to delete: ");
	scanf("%d",&pos);
	if (pos>=0 && pos <n){
		for(int i=pos;i<n-1;i++){
			a[i]=a[i+1];
		} 					
			--n; 
		break;		
	} else {
		printf("\nOOPS ERROR !!!!!"); 
		printf(" Enter number <=%d",n-1); 
		printf("\nPlease enter again"); 
	}
} while (true); 
} 
void max1(int a[size], int &n){
	float ave;
	int tmp=0; 
	float sum=0; 
	for(int i=0;i<n;i++){
			sum=sum+(float)a[i];  
	}
	ave=sum/n; 
	for(int j=0;j<n;j++){
		if (a[j]>=ave){
			tmp=a[j];
			printf(" %d ",tmp);
		} 
	} 
printf("\nAverage: %0.2f",ave); 
}
void ab(int a[size], int &n){
	int x,y;
	do{
	printf("Please enter first number: ");
	scanf("%d",&x);  
	printf("   Please enter second number: ");
	scanf("%d",&y); 
	if (x<y){
		for(int i=0;i<n;i++){ 
			if (a[i]>=x && a[i]<=y){
			printf("(%d,%d)",a[i],i); 
	}  
	}
	break; 
	} else{
			printf("   Please enter a<b"); 
			printf("\n   Please enter again"); 
			printf("\n"); 
	} 

 
} while (true); 

} 
int main() {
int a[size],n,pos,i; 
do{
input(a,n);
if (a[i]>=0 && a[i]<=100){
	printf("1. The array is: ");
output(a,n); 
printf("\n");
printf("2. "); 
max(a,n);
printf("\n3. "); 
max1(a,n);
printf("\n");
printf("4. Array after being sorted: "); 
sort(a,n); 
add(a,n);
printf("=> "); 
output(a,n); 
del(a,n);
output(a,n); 
printf("\n");
printf("\n7. "); 
ab(a,n); 
break; 
} else {
	printf("Please enter from 0 to 100 ");
	printf("\nPlease enter again"); 
	printf("\n"); 
}
} while (true); 
return 0;
}


