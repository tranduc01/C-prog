#include <stdio.h>
#include <math.h>
void binary(int *bin){
	int a,dec=0;
	int count=0;
	printf("Please Enter Binary ");
	scanf("%d",bin);
	while(*bin!=0){
			a=*bin%10;
			*bin=*bin/10;
			dec=dec+(a*pow(2,count));
			count++;
	}
	printf("->Decimal: %d",dec); 
}
void decimal(int *n){
	int a[10],i;  
	printf("Enter Dec ");  
	scanf("%d",n);  
	for(i=0;*n>0;i++){  
	a[i]=*n%2;  
	*n=*n/2;  
	}  
	printf("=> Bin:  ");  
	for(i=i-1;i>=0;i--){  
	printf("%d",a[i]);  
	}
}
void table(int i,int j){
	for (i=1;i<10;i++){
	printf("\n");
	for (j=1;j<10;j++){
		printf("%d x %d = %d\n",i,j,i*j);
	}
	}	 
}
void count(int *x){
	int count=1;
	printf("Enter the number ");
	scanf("%d",x);
	while(*x>=10 || *x<=-10){
	*x=*x/10;
	count++; 
	} 
	printf("Number of digits:%d",count);
}
void rever(int *n){
    
    printf("Enter the number ");
    scanf("%d",n);
    printf("=>"); 
    while(*n!=0)
    {
        printf("%d",*n%10);
        *n=*n/10;    
    }
}
int main() {
int choose;
do{
printf("\nPlease choose:");
printf("\n1. Binary -> Decimal");
printf("\n2. Decimal -> Binary");
printf("\n3. Multiplication Table");
printf("\n4. Digit Number");
printf("\n5. Reverse Number");
printf("\nYou Choose: ");
scanf("%d",&choose);
switch(choose){
	case 1: 
		int bin; 
		binary(&bin);
		break;
	case 2:
		int n; 
		decimal(&n);
		break; 
	case 3:
		int i,j; 
		table(i,j); 
		break; 
	case 4:
		int x; 
		count (&x); 
		break; 
	case 5:
		rever(&n);	
		break; 
	default: printf("Please Choose a number 1 to 5");
} 
} while (choose!=6);
return 0; 
}








