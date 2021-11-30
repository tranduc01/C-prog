#include <stdio.h>
#include <stdlib.h>
#include<math.h> 
#include<string.h>
#define size 1000



void sqa(int a[],int n){
	FILE *f=fopen("Asi4out.txt", "a");
	int flag=0;
	int sqr;
	for(int i=0;i<n;i++){
		sqr=sqrt(a[i]);
		if(sqr*sqr==a[i]){
			flag++;
			printf("\n%d is a Square Number",a[i]);
			printf("\nPosition: %d",i); 
			fprintf(f,"\n%d is a Square Number",a[i]);
			fprintf(f,"\nPosition: %d",i); 
		}
	} if (flag==0) {
	printf("\nNOT FOUND");
	fprintf(f,"\n\nNOT FOUND");
	fprintf(f,"\n\n");
	fclose(f);
}
	}

void count(int a[],int n){
	FILE *f=fopen("Asi4out.txt", "a");
	int flag=0,flag1=0;
	printf("\nEven Number: ");
	fprintf(f,"\nEven Number: ");
	for(int i=0;i<n;i++){
		if(a[i]%2==0){
			flag++;
			printf("%d ",a[i]);
			fprintf(f,"%d ",a[i]);
		} 
	} printf("\nNumber of Even Number: %d",flag);
	fprintf(f,"\nNumber of Even Number: %d",flag);
	printf("\n\nOdd Number: ");
	fprintf(f,"\n\nOdd Number: ");
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			flag1++;
			printf("%d ",a[i]);
			fprintf(f,"%d ",a[i]);
		}
		
	} printf("\nNumber of Odd number: %d",flag1);
	fprintf(f,"\nNumber of Odd number: %d",flag1);
	fclose(f);
}

void sort(int a[],int n){
	FILE *f=fopen("Asi4out.txt", "a");
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
			}
		}
	}
	printf("\n\nAscending Order: ");
	fprintf(f,"\n\nAscending Order: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
		fprintf(f,"%d ",a[i]);
	}
	fclose(f);
}
void fre(int a[],int n){
	FILE *f=fopen("Asi4out.txt", "a");
	int max = 1;
	int gt=0;
	int flag=0;
	for (int i = 0; i < n; i++){
  		int dem = 0;
  			for (int j = 0; j < n; j++){
   				if (a[i] == a[j]) dem++;
			  }
				  if (max < dem)
  		{
  		 max = dem;
  		 gt = a[i];
  			}
 }
 for(int i=0;i<n;i++){
 		if(gt==a[i]){
 		flag++;
 printf("\n\nMost appear: %d\nAppear %d times", gt, max);
 fprintf(f,"\n\nMost appear: %d\nAppear %d times", gt, max);
 printf("\n");
	}
	
}
if(flag==0) {
	fprintf(f,"\n\nCan't find most frequent elements");
	printf("\n\nCan't find most frequent elements");
	printf("\n\n");
	fprintf(f,"\n\n");
}

fclose(f);
}
int main(){
	int choose;
	int a[100];
	FILE *fi=fopen("Asi4in.txt", "r");
	int i,n;
	fscanf(fi,"%d",&n);
	fprintf(fi,"\n");
	for(i=0;i<n;i++){		
	fscanf(fi,"%d ",&a[i]);
	}
	fclose(fi);
	FILE *f=fopen("Asi4out.txt", "w+");
	for(i=0;i<n;i++){
		printf(" %d ",a[i]);
	}
	fclose(f); 
				sqa(a,n);
				printf("\n");
	
				count(a,n);
				printf("\n");
		
				sort(a,n);
				printf("\n");
				
				fre(a,n);
				printf("\n"); 

		}


