#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define size 1000 
typedef struct stu {
	char code[20];
	char name[30];
	float mark; 
};

void input(stu a[size],int &n){ 
	
	printf("\nEnter number of student: ");
	scanf("%d",&n);	
	while (n<=0 || n>=1000){
		printf("Enter again from 1 to 1000 ");
		scanf("%d",&n);
		fflush(stdin);
	} 
	for(int i=0;i<n;i++){
	printf("+ Enter student %d ",i+1); 
	printf("\nEnter name: ");
	fflush(stdin); 
	gets(a[i].name);
 	printf("Enter studen's ID: ");
	fflush(stdin); 
	cont: scanf("%s",&a[i].code); 
		if (strcmp(a[i].code,a[i-1].code)==0){
		printf("Valid ID. Please enter again "); 
		goto cont; 
	} 
	cont1: printf("Enter GPA: ");
		fflush(stdin); 
	if (scanf("%f",&a[i].mark)==1){
	 if (a[i].mark >=0 && a[i].mark<=10){
	 	continue; 
	 } else {
	printf("\nPlease enter GPA from 0 to 10 ");
	printf("\nPlease enter again"); 
	printf("\n");
	goto cont1; 
	 } 
		
	} else {
		printf("\nGPA must be a number ");
		printf("\nPlease enter again"); 
		goto cont1; 
	} 

		 
	}
	
}
void output(stu a[size],int n){
	for(int i=0;i<n;i++){
		printf("\n+Name: %s",a[i].name);
		printf("\n ID: %s",a[i].code);
		printf("\n GPA: %0.2f",a[i].mark);
	} 
} 
void findid(stu a[size],int &n){
bool flag=0;
char id[20]; 
cont: printf("Enter ID you want to find: ");
scanf("%s",&id); 
for(int i=0;i<n;i++){
	if  (strcmp(id,a[i].code)==0){
		printf("+Name: %s",a[i].name);
		printf("\n ID: %s",a[i].code);
		printf("\n GPA: %f",a[i].mark);
		printf("\n Ranked Academic: ");
		if (a[i].mark>=8 && a[i].mark<=10){
			printf("Very Good"); 
		}
		if (a[i].mark<8 && a[i].mark>=7){
			printf("Good"); 
		}
		if (a[i].mark<7 && a[i].mark>=6){
			printf("Above average"); 
		}
		if (a[i].mark<6 && a[i].mark>=5){
			printf("Average"); 
		} if (a[i].mark<5) {
			printf("Weak"); 
		}  
		flag=true; 
	}
		
}
if (flag==false){
	printf("\nCannot Find");
	printf("\nPlease enter again"); 
	printf("\n"); 
	goto cont; 
}
}
void findname(stu a[size],int &n){
bool flag=0; 
char name1[20]; 
cont: printf("Enter name you want to find: ");
scanf("%s",&name1); 
for(int i=0;i<n;i++){
	if  (strcmp(name1,a[i].name)==0){
		printf("+Name: %s",a[i].name);
		printf("\n ID: %s",a[i].code);
		printf("\n GPA: %f",a[i].mark);
		printf("\n Ranked Academic: ");
		if (a[i].mark>=8 && a[i].mark<=10){
			printf("Very Good"); 
		}
		if (a[i].mark<8 && a[i].mark>=7){
			printf("Good"); 
		}
		if (a[i].mark<7 && a[i].mark>=6){
			printf("Above average"); 
		}
		if (a[i].mark<6 && a[i].mark>=5){
			printf("Average"); 
		} if (a[i].mark<5) {
			printf("Weak"); 
		}  
		flag=true; 
	}
		
}
if (flag==false){
	printf("\nCannot Find");
	printf("\nPlease enter again"); 
	printf("\n"); 
	goto cont; 
} 
}
void sort(stu a[size], int &n) {
    stu tmp;
    for(int i = 0;i < n;i++){
        for(int j = i+1; j < n;j++){
            if(a[i].mark > a[j].mark){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            } 
        } 
    }
for(int i=0;i<n;i++){
		printf("\n+Name: %s",a[i].name);
		printf("\n ID: %s",a[i].code);
		printf("\n GPA: %f",a[i].mark);
	}
}
void top(stu a[size],int &n){
	for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i].mark < a[j].mark) {
                stu temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("== Top 3 =="); 
    for (int i=0;i<3;i++) {
        printf("\n+Name: %s",a[i].name);
		printf("\n ID: %s",a[i].code);
		printf("\n GPA: %f",a[i].mark);
    }
}
void add(stu a[size], int &n)
{
int add=0; 
printf("Enter the number of students you want to add: ");
scanf("%d",&add); 	 
while (add<=0 || add>=1000){
		printf("Enter again from 1 to 1000 ");
		scanf("%d",&add);
		fflush(stdin);
	} 
	for(int i=n;i<add+n;i++){
	printf("+ Enter student %d ",i+1); 
	printf("\nEnter name: ");
	fflush(stdin); 
	gets(a[i].name);
 	printf("Enter studen's ID: ");
	fflush(stdin); 
	cont: scanf("%s",&a[i].code); 
		if (strcmp(a[i].code,a[i-1].code)==0){
		printf("Valid ID. Please enter again "); 
		goto cont; 
	} 
	cont1: printf("Enter GPA: ");
		fflush(stdin); 
	if (scanf("%f",&a[i].mark)==1){
	 if (a[i].mark >=0 && a[i].mark<=10){
	 	continue; 
	 } else {
	printf("\nPlease enter GPA from 0 to 10 ");
	printf("\nPlease enter again"); 
	printf("\n");
	goto cont1; 
	 } 
		
	} else {
		printf("\nGPA must be a number ");
		printf("\nPlease enter again"); 
		goto cont1; 
	} 	 
	}
	n=n+add;  
	printf("\nList after added: "); 
	output(a,n);
}
void delid(stu a[size],int &n){
char id[20];
bool flag=0; 
cont: printf("\nEnter ID you want to delete: ");
scanf("%s",&id);
for(int i=0;i<n;i++){
	if  (strcmp(id,a[i].code)==0){
		for(int j=i;j<n;j++){
			a[i]=a[i+1];
			--n; 
		}
		flag=true;  
		printf("\nList after deleted: ") ;
	} 
	
	} 
	if (flag==false){
		printf("Cannot find the student");
		printf("\nPlease enter again");
		goto cont; 
	}
	
} 


int main() {
stu a[size];
int n,i,choose; 
do{
fflush(stdin);	
input(a,n);
} while (n<=0);
cont: do{
fflush(stdin); 
printf("\n====Menu====");
printf("\nTell me what you want to do....");
printf("\n1. Output ");
printf("\n2. Find student ");
printf("\n3. Sort ");
printf("\n4. Find top 3 GPA ");
printf("\n5. Add Students ");
printf("\n6. Delete Students ");
printf("\n7. Exit ");
printf("\nYou choose: "); 
scanf("%d",&choose);
switch(choose){
	case 1: 
	output(a,n); 
	break; 
	case 2: 
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
	case 3:
		sort(a,n);
		break; 
	case 4: 
		if(n>=3){
			top(a,n);
		} else {
	 cont3: 
			printf("\nMust input at least 3 students");
			printf("\nDo you want add more students ??");
			printf("\n1. Yes ");
			printf("2. No ");
			int choose2;
			fflush(stdin); 
			scanf("%d",&choose2);
				while (choose2 <=0 || choose2 >2) {
				printf("\nPlease choose 1 or 2 "); 
				printf("\nPlease choose again"); 
				scanf("%d",&choose2);
				fflush(stdin); 
			} 
			switch(choose2){
				case 1: 
				fflush(stdin); 
				add(a,n);
				if (n>=3){
					top(a,n);
				} else {
					goto cont3; 
				} 
				    
				break;
				case 2:
					goto cont;
				default: printf("Please choose 1 or 2 "); 
			}   
			} 
		break; 
	case 5:
		fflush(stdin); 
		add(a,n);
		break; 
	case 6:
			delid(a,n);
			output(a,n);
	break;
	case 7:
		printf("Goodbye !!!! \n");
		exit(0);
		break; 
	default: printf("Please enter number 1-8 !!"); 
			 printf("\n"); 		
			 system("pause");
}
} while (true); 

} 
 



