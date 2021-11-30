#include <stdio.h>
#include <iostream> 
#define size 1000 
using namespace std;
void input(int a[size],int &n){
	printf("Enter the number element of the array ");
	scanf("%d",&n);	
	for(int i=0;i<n;i++){
		printf("Enter the %d element: ",i);
		scanf("%d",&a[i]); 
	} 
} 
void output(int a[size],int n){
	for(int i=0;i<n;i++){
		printf(" %d ",a[i]); 
	} 
} 
void search(int a[size],int n,int x){
	printf("Enter the element you want to find ");
	scanf("%d",&x);
	for(int i=0;i<size;i++){
		if (x==a[i]){
			printf("\nFound element %x at position %d ",x,i+1); 
			break; 
		}
	} 
}
void add(int a[size],int &n){
	int pos,x;
	printf("Enter the value to add ");
	scanf("%d",&x); 
	printf("Enter the position you want to add ");
	scanf("%d",&pos);	 
	if (pos>=0 && pos<=n){
		for(int i=n;i>pos-1;i--){
			a[i]=a[i-1];
		}			
			a[pos-1]=x; 
			++n;   
		}else {
			printf("\nOOPS ERROR !!!!!"); 
	} 
} 
int main() {
int choose,a[size];
bool flag=true;

int n; 
input(a,n);

do{
system("cls");
printf("\n====Menu====");
printf("\nTell me what you want to do....");
printf("\n1. Input ");
printf("\n2. Output ");
printf("\n3. Search ");
printf("\n4. Add ");
printf("\n5. Delete ");
printf("\n6. Sort ");
printf("\n7. Exit ");
printf("\nYou choose "); 
scanf("%d",&choose);
switch(choose){
	case 2:
		output(a,n);
		printf("\n"); 
		system("pause");
		break;
	case 3: 
		int x; 
		search(a,n,x);
		printf("\n"); 
		system("pause");
		break; 
	case 4:
		add(a,n);
		printf("\n=>");
		output(a,n); 
		system("pause"); 
		break; 
}
} while (true); 
return 0;
}



