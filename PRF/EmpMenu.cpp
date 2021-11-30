#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 1000 
typedef struct emp {
	char code[20];
	char name[30];
	float sala; 
};
int count(const char *emp){
	FILE *f = fopen("emp.txt", "r");
	char b[500];
	int row=0;
    while (fgets(b, 500, f)) {
        row++;
    }
    fclose(f);
    return row;
}
 
void input(emp a[size],int &n){ 
  FILE *f;
  f = fopen("emp.txt","a");
	for(int i=n+1;i<=n+1;i++){
	cont2:	printf("\n\nEnter EmID: ");
			scanf("%s",&a[i].code);
			for(int j=i-1;j>=1;j--){
				fscanf(f,"%s",&a[i].code); 
				if(strcmp(a[j].code,a[i].code)==0){
					printf("\nThis ID has been used");
					printf("\nPlease re-enter another ID");
					goto cont2;
					}
			}
			printf("\nEnter EmName: ");
			fflush(stdin);
			gets(a[i].name);
cont:		printf("\nEnter EmSalary: ");
			fflush(stdin);
			if(scanf("%f",&a[i].sala)==0) {
				printf("\n\nThis is must be a number\n");
				goto cont;
			}
			fprintf(f,"%s\t%s\t%.2f\n",a[i].code,a[i].name,a[i].sala);
		}
		n++;
		fclose(f);
}

void write(emp a[size],int &n){
FILE *f;
  f = fopen("emp.txt","a");
	for(int i=1;i<=n;i++){
		fprintf(f,"\n%s\t%s\t%0.2f",a[i].code,a[i].name,a[i].sala);
	} 
	fclose(f); 
} 
void read(emp a[size],int &n){
	FILE *f;
	char s[60];
   f = fopen("emp.txt","r+");
	if(f!=NULL){
		for(int i=1;i<=n;i++){
			fgets(s,60,f);
			printf("%s",s); 
			fscanf(f,"%s",&a[i].name);
 			printf("%s\t",a[i].name); 
			fscanf(f,"%s",&a[i].code);
			printf("%s\t",a[i].code); 
			fscanf(f,"%f",&a[i].sala);	
			printf("%f",a[i].sala); 
	
		}
	}
	fclose(f);
}
void del(emp a[size],int &n){
	FILE *f;
	char s[60];
	char id[20]; 
   f = fopen("emp.txt","w");
   printf("Enter ID you want to delete: ");
   scanf("%s",id); 
   for(int i=1;i<=n;i++){
			fgets(s,60,f);

			fscanf(f,"%s",&a[i].name);
 
			fscanf(f,"%s",&a[i].code);
			for(int j=i-1;j>=1;j--){
				if(strcmp(a[i].code,a[j-1].code)==0){
					printf("yes"); 
				}
				
			}
			fscanf(f,"%f",&a[i].sala);	
	
		}
	}
int main(){         
int choose; 
int n=count("emp.txt");  
n=n-1;
printf("%d",n); 
emp a[size]; 
read(a,n);
printf("\n====Menu====");
printf("\nTell me what you want to do....");
printf("\n1. Add an employee ");
printf("\n2. Find an employee ");
printf("\n3. Delete an employee ");
printf("\n4. Sort (by salary level)");
printf("\n5. Statistics ");
printf("\n6. Exit ");
printf("\nYou choose: "); 
scanf("%d",&choose);
switch(choose){
	case 1:
		input(a,n);
		break;
	case 2:
		del(a,n);
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
return 0; 
}
