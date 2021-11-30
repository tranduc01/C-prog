#include <stdio.h>
#include <stdlib.h>
#define size 1000 

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
	printf("\nEnter the element you want to find ");
	scanf("%d",&x);
	if (x<=n && x>0){
	for(int i=0;i<size;i++){
		if (x==a[i]){
			printf("\nFound element %x at position %d ",x,i+1); 
			break; 
		}
	}
	} else {
		printf("\nOOPS ERROR !!!!!");
	} 
}
void add(int a[size],int &n){
	int pos,x;
	printf("\nEnter the value to add: ");
	scanf("%d",&x); 
	printf("Enter the position you want to add: ");
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
void del(int a[size],int &n){
	int pos; 
	printf("\nEnter the position to delete: ");
	scanf("%d",&pos);
	if (pos>0 && pos <=n){
		for(int i=pos;i<n-1;i++){
			a[i]=a[i+1];
		} 					
			--n; 		
	} else {
		printf("\nOOPS ERROR !!!!!"); 
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
void sort1(int a[size],int &n){
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i] < a[j]) {
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
int main() {
int choose,a[size];
bool flag=true;

int n; 
input(a,n);

do{
system("cls");
printf("\n====Menu====");
printf("\nTell me what you want to do....");
printf("\n1. Output ");
printf("\n2. Search ");
printf("\n3. Add ");
printf("\n4. Delete ");
printf("\n5. Sort ");
printf("\n6. Exit ");
printf("\nYou choose: "); 
scanf("%d",&choose);
switch(choose){
	case 1:
		output(a,n);
		printf("\n"); 
		system("pause");
		break;
	case 2: 
		int x; 
		search(a,n,x);
		printf("\n"); 
		system("pause");
		break; 
	case 3:
		add(a,n);
		printf("\n=>");
		output(a,n); 
		printf("\n"); 
		system("pause"); 
		break;
	case 4:
		del(a,n);
		printf("\n=>");
		output(a,n); 
		printf("\n"); 
		system("pause"); 
		break;
	case 5:
		int choose1;
		printf("\n1.Ascending");
		printf("\n2.Descending");
		printf("\nYou choose "); 
		scanf("%d",&choose1); 
		switch(choose1){
			case 1:
				sort(a,n);
				printf("\n"); 
				system("pause");
				break;
			case 2: 
				sort1(a,n);
				printf("\n"); 
				system("pause");
				break; 
			default: printf("Please choose number 1 or 2 !!!!");
					 printf("\n"); 		
			 		 system("pause"); 
		}
		break; 	 	
	case 6:
		printf("Goodbye !!!! \n");
		system("pause");
		exit(0);
		break; 
	default: printf("Please enter number 1-6 !!"); 
			 printf("\n"); 		
			 system("pause");
}
} while(true); 
return 0;
}



