#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 1000 
typedef struct emp {
	char id[20];
	char name[30];
	float sal; 
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
void add (emp a[size],int &n){
	FILE *f = fopen("emp.txt", "a");
	for(int i=n+1;i<=n+1;i++){
	cont2:	printf("\nEnter EmID: ");
			scanf("%s",&a[i].id);
			for(int j=i-1;j>=1;j--){
				if(strcmp(a[j].id,a[i].id)==0){
					printf("Valid ID. Please re-enter another ID");
					goto cont2;
					}
				}	
			printf("\nEnter EmName: ");
			fflush(stdin);
			gets(a[i].name);
cont:		printf("\nEnter EmSalary: ");
			fflush(stdin);
			if(scanf("%f",&a[i].sal)==0) {
				printf("\n\nThis is must be a number\n");
				goto cont;
			}
			fprintf(f,"%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
		}
		n++;
		fclose(f);
}
void read(emp a[size],int &n){
	char s[60];
   FILE *f = fopen("emp.txt","r");
		for(int i=1;i<=n;i++){
			fgets(s,60,f);
			printf("%s",s); 
			fscanf(f,"%s",&a[i].id);
 			printf("%s\t",a[i].id); 
			fscanf(f,"%s",&a[i].name);
			printf("%s\t",a[i].name); 
			fscanf(f,"%f",&a[i].sal);	
			printf("%0.2f",a[i].sal); 
	
		}
	
	fclose(f);
}
void write(emp a[size],int n){
	FILE *f = fopen("emp.txt","w+");
	fputs("EmID\tEmName\tEmSalary\n",f);
	for(int i=1;i<=n;i++){
		fprintf(f,"%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
	} 
	fclose(f); 
}
void delid(emp a[size],int &n){
char id[20];
bool flag=0; 
char s[60];
   FILE *f = fopen("emp.txt","r+");
		for(int i=1;i<=n;i++){
			fgets(s,60,f);
			fscanf(f,"%s",&a[i].id);
			fscanf(f,"%s",&a[i].name);
			fscanf(f,"%f",&a[i].sal);	
		}
cont: printf("\nEnter ID you want to delete: ");
scanf("%s",&id);
for(int i=1;i<=n;i++){
	if  (strcmp(id,a[i].id)==0){
		for(int j=i;j<n;j++){
			a[i]=a[i+1];
		
		}
			--n; 
		flag=true;  
	} 
	
	} 
	if (flag==false){
		printf("Cannot find the employee");
		printf("\nPlease enter again");
		goto cont; 
	}
	fclose(f);
		

	f = fopen("emp.txt","w+");
	fputs("EmID\tEmName\tEmSalary\n",f);
	for(int i=1;i<=n;i++){
		fprintf(f,"%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
	} 
		fclose(f);
}
void findid(emp a[size], int &n){
bool flag=0; 
char s[60];
char code[20];
FILE *f = fopen("emp.txt","r");
		for(int i=1;i<=n;i++){
			fgets(s,60,f);
			fscanf(f,"%s",&a[i].id);
			fscanf(f,"%s",&a[i].name);
			fscanf(f,"%f",&a[i].sal);	
		} 
cont: printf("Enter ID you want to find: ");
scanf("%s",&code); 
for(int i=1;i<=n;i++){
	if  (strcmp(code,a[i].id)==0){
		printf("+Name: %s",a[i].name);
		printf("\n ID: %s",a[i].id);
		printf("\n Salary Level: %0.2f",a[i].sal);
		flag=true; 
	}		
}
if (flag==false){
	printf("\nCannot Find");
	printf("\nPlease enter again"); 
	printf("\n"); 
	goto cont; 
}
fclose(f);
 
}
void findname(emp a[size], int &n){
bool flag=0; 
char s[60];
char name1[20];
FILE *f = fopen("emp.txt","r");
		for(int i=1;i<=n;i++){
			fgets(s,60,f);
			fscanf(f,"%s",&a[i].id);
			fscanf(f,"%s",&a[i].name);
			fscanf(f,"%f",&a[i].sal);	
		} 
cont: printf("Enter name you want to find: ");
scanf("%s",&name1); 
for(int i=1;i<=n;i++){
	if  (strcmp(name1,a[i].name)==0){
		printf("+Name: %s",a[i].name);
		printf("\n ID: %s",a[i].id);
		printf("\n Salary Level: %0.2f",a[i].sal);
		flag=true; 
	}		
}
if (flag==false){
	printf("\nCannot Find");
	printf("\nPlease enter again"); 
	printf("\n"); 
	goto cont; 
}
fclose(f);
 f = fopen("emp.txt","w+");
	fputs("EmID\tEmName\tEmSalary\n",f);
	for(int i=1;i<=n;i++){
		fprintf(f,"%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
	} 
		fclose(f);
		f = fopen("emp.txt","w+");
	fputs("EmID\tEmName\tEmSalary\n",f);
	for(int i=1;i<=n;i++){
		fprintf(f,"%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
	} 
		fclose(f);
}				
void sort(emp a[size],int &n){
	char s[60]; 
	FILE *f = fopen("emp.txt","r");
		for(int i=1;i<=n;i++){
			fgets(s,60,f);
			fscanf(f,"%s",&a[i].id);
			fscanf(f,"%s",&a[i].name);
			fscanf(f,"%f",&a[i].sal);	
		}
	emp tmp;
    for(int i = 1;i <= n;i++){
        for(int j = i+1; j <= n;j++){
            if(a[i].sal > a[j].sal){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            } 
        } 
    }
    printf("EmID	EmName	EmSalary");
for(int i=1;i<=n;i++){
		printf("\n%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
	}
	f = fopen("emp.txt","w+");
	fputs("EmID\tEmName\tEmSalary\n",f);
	for(int i=1;i<=n;i++){
		fprintf(f,"%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
	}
	fclose(f); 
}
void sort1(emp a[size],int &n){
	char s[60]; 
	FILE *f = fopen("emp.txt","r");
		for(int i=1;i<=n;i++){
			fgets(s,60,f);
			fscanf(f,"%s",&a[i].id);
			fscanf(f,"%s",&a[i].name);
			fscanf(f,"%f",&a[i].sal);	
		}
	emp tmp;
    for(int i = 1;i <= n;i++){
        for(int j = i+1; j <= n;j++){
            if(a[i].sal < a[j].sal){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            } 
        } 
    }
    
fclose(f);	 
}
void edit(emp a[size],int &n){
	char up[5];
	int cup;
	char upid[5],upna[30];
	float upsal;
cont2:	printf("Enter your EmID you want to update: ");
	scanf("%s",&up);
	for(int i=1;i<=n;i++){
		if(strcmp(a[i].id,up)==0){
			while(1){
			printf("\n\nEmID: %s",a[i].id);
			printf("\nEmName: %s",a[i].name);
			printf("\nEmSalaryLevel: %.2f",a[i].sal);
			printf("\n\nWhich one you want to update? ");
			printf("\n1. EmID");
			printf("\n2. EmName");
			printf("\n3. EmSalaryLevel");
			printf("\n4. Exit ");
			printf("\n\nChoose [1-4]: ");
			fflush(stdin);
			scanf("%d",&cup);
			if(cup<1||cup>4){
				printf("\n\nPlease enter number [1-4]");
				continue;
			}
			switch(cup){
				case 1:
					printf("\n\n===EmID===");				
cont:				printf("\n\nEnter the new EmID: ");
					scanf("%s",&upid);
					for(int j=1;j<=n;j++){				
							if(strcmp(a[j].id,upid)==0){
								printf("\n\nValid ID");
								printf("\nPlease re-enter another ID");
								goto cont;
							}				
						}
					strcpy(a[i].id,upid);		
					system("cls");
					printf("\nUpdated Successfully!!!");
					break;
				case 2:
					printf("\n\n==EmName==");
					printf("\nEnter the new EmName: ");
					fflush(stdin);
					gets(upna);
 					strcpy(a[i].name,upna);
 					system("cls");
 					printf("\nUpdated Successfully!!!");
 					break;
 				case 3:
 					printf("\n==EmSalaryLevel==");
cont1:				printf("\n\nEnter the new EmSalaryLevel: ");
					fflush(stdin);
					if(scanf("%f",&upsal)==0) {
						printf("\n\nThis is must be a number");
						goto cont1;
				}
 					a[i].sal=upsal;
 					
 					printf("\nUpdated Successfully!!!");
 					break;
 				case 4:
 					return;
 					break;
 				}
			}
		} else {
			printf("\n\nYour EmID does not exist!!!");
			printf("\nPlease try again!!");
			goto cont2;
		}
	}
}
void stat(emp a[size],int &n){
	char id[5];
	FILE *f = fopen("statistic.txt", "w");
	fprintf(f,"Total of the employees: %d",n);
	printf("\n\nTotal of the employees: %d",n);
	printf("\n\n");	
		for(int i=1;i<n;i++){
		int flag=0;
		int flag1=0;
     		 for(int j=i+1;j<=n;j++){
         		  if(strcmp(a[i].name,a[j].name)==0){
         		  	for(int t=i-1;t>=1;t--){
	       		  		if(strcmp(a[i].name,a[t].name)==0){
         		  		flag1++;
					   } 
					   	} if(flag1>0) break;
				  		if(flag==0)  {
				 			printf("%s",a[i].id);
				 			fprintf(f,"\n%s",a[i].id); 
				 			flag++;
						 }
           	  			printf(",%s",a[j].id); 
           	  			fprintf(f,";%s",a[j].id); 
			}
		} printf(";");
	}
		
		sort1(a,n);
		printf("\n\nHighest Salary Level:");
		for(int i=1;i<=1;i++){
     		fprintf(f,"\nEmID: %s",a[i].id);
     		printf("\nEmID: %s",a[i].id);
			fprintf(f,"\nEmName: %s",a[i].name);
			printf("\nEmName: %s",a[i].name);
			fprintf(f,"\nEmSalaryLevel: %.2f",a[i].sal);
			printf("\nEmSalaryLevel: %.2f",a[i].sal);
	}
	fclose(f);
}

int main(){
emp a[size]; 
int choose;  
FILE *f = fopen("emp.txt", "r");
int n=count("input.txt");
n=n-1;
read(a,n);
write(a,n); 

cont: do{
fflush(stdin); 
printf("\n====Menu====");
printf("\nTell me what you want to do....");
printf("\n1. Add an employee ");
printf("\n2. Delete an employee ");
printf("\n3. Find an employee ");
printf("\n4. Edit infor(by ID) ");
printf("\n5. Sort (by salary level)");
printf("\n6. Statistics ");
printf("\n7. Exit ");
printf("\nYou choose: "); 
scanf("%d",&choose);
switch(choose){
	case 1:
		add(a,n);
		break; 
	case 2:
		delid(a,n);
		read(a,n);
		break; 
	case 3:
		do{
	fflush(stdin); 
	int choose1;
	printf("\n\n1. Find by Name ");
	printf("\n2. Find by ID ");
	printf("\n3. Return ");
	printf("\nYou choose: ");
	scanf("%d",&choose1);
	switch(choose1){
		case 1:
			findname(a,n);  
			break;
		case 2:
			findid(a,n);
			break; 
		case 3: 
		goto cont;
		default: printf("Please choose 1 or 2 "); 
	} 
	} while (n>0); 
	break;
	case 4:
		edit(a,n);
		write(a,n); 
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
				break;
			case 2: 
				sort1(a,n);
				printf("EmID	EmName	EmSalary");
				for(int i=1;i<=n;i++){
				printf("\n%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
				}
				f = fopen("emp.txt","w+");
				fputs("EmID\tEmName\tEmSalary\n",f);
				for(int i=1;i<=n;i++){
				fprintf(f,"%s\t%s\t%.2f\n",a[i].id,a[i].name,a[i].sal);
				}
				break; 
			default: printf("Please choose number 1 or 2 !!!!");
		}
		break;						
	case 6:
		stat(a,n);
		break; 
 	case 7:
		printf("Goodbye !!!! \n");
		system("pause");
		exit(0);
		break; 
	default: printf("Please enter number 1-6 !!"); 
}
} while (true); 
fclose(f); 
}




