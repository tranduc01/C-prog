#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 1000 

void input(float a[size],int &n){
	printf("Enter the number element of the array: ");
	scanf("%d",&n);	
	if (n>0 && n<100){
	for(int i=0;i<n;i++){
		printf("Enter mark: ");
		scanf("%f",&a[i]);	 
	}
} else {
	printf("\nEnter bigger than 0");
	printf("\nPlease enter agian"); 
} 
}  
void output(float a[size],int n){
	for(int i=0;i<n;i++){
		printf(" %0.2f ",a[i]); 
	} 
} 	
void sort(float a[size],int &n){
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i] > a[j]) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    } 
    for (int i=0;i<n;i++) {
        printf(" %0.2f ",a[i]);
    }
}
void max(float a[size], int &n){
	float max=a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i]; 
		} 
	}
	for(int j=0;j<n;j++){
		if (a[j]==max){
			printf("(%d,%0.2f) ",j,max);
		} 
	} 
 	 
}

void add(float a[size],int &n){
	float x;
	int pos;
	do{
	
	printf("\n5. Enter the value to add: ");
	scanf("%f",&x); 
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
} while (pos>0); 
} 
void del(float a[size],int &n){
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
		printf("\nPlease enter again"); 
	}
} while (true); 
} 
void max1(float a[size], int &n){
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
void ab(float a[size], int &n){
	float x,y;
	do{
	fflush(stdin);
	printf("Please enter first number: ");
	scanf("%f",&x);  
	printf("   Please enter second number: ");
	scanf("%f",&y); 
	if (x<y && x<=n){
		for(int i=0;i<n;i++){ 
			if (a[i]>=x && a[i]<=y){
			printf("(%0.2f,%d)",a[i],i); 
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
int n,pos,choose,i; 
float a[size];
do{

input(a,n);
if (a[i]>=0 && a[i]<=100){	
cont: do{
system("cls");
printf("\n====Menu====");
printf("\nTell me what you want to do....");
printf("\n1. Output ");
printf("\n2. Find Max ");
printf("\n3. Find values bigger than average ");
printf("\n4. Sort ");
printf("\n5. Add ");
printf("\n6. Delete ");
printf("\n7. Find values between 2 numbers from the keyboard ");
printf("\n8. Exit ");
printf("\nYou choose: "); 
scanf("%d",&choose);
switch(choose){
case 1:
		printf("1. The array is: ");
		output(a,n); 
		printf("\n"); 
		system("pause");
		break;
	case 2: 
		printf("2. "); 
		max(a,n); 
		printf("\n"); 
		system("pause");
		break; 
	case 3:
		printf("\n3. "); 
		max1(a,n); 
		printf("\n"); 
		system("pause"); 
		break;
	case 4:
		printf("\n");
		printf("4. Array after being sorted: "); 
		sort(a,n); 
		printf("\n"); 
		system("pause"); 
		break;
	case 5:
		add(a,n);
		printf("=> ");
		output(a,n);
		printf("\n"); 
		system("pause"); 
		break; 	 	
	case 6:
		del(a,n);
		output(a,n);
		printf("\n");  
		system("pause");
		exit(0);
		break; 
	case 7:
		float x,y; 
		printf("\n7. "); 
		ab(a,n);
		printf("\n"); 
		system("pause"); 
		do{
		int choose1;
		printf("Do you want to continue??");
		printf("\n1. Yes"); 
		printf("\n2. No");
		printf("\nYou choose: "); 
		scanf("%d",&choose1);
		switch(choose1){
			case 1: 
				printf("\n7. "); 
				ab(a,n);
				printf("\n"); 
			 	break;
			case 2:
				printf("Good Bye ! Have a nice day !!!");
				goto cont;
			default: printf("Please choose Yes or No"); 
		}
		} while (x>=0 && y>=0);
		break; 
	case 8:
		printf("Goodbye !!!! \n");
		exit(0);
		break;  
	default: printf("Please enter number 1-7 !!"); 
			 printf("\n"); 		
			 system("pause");
}
} while(true); 
} else {
	printf("Please enter from 0 to 100 ");
	printf("\nPlease enter again"); 
	printf("\n"); 
}
} while (true);
return 0;
}


