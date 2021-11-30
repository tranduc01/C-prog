#include<stdio.h>
typedef struct Stu{
	char ID[20];
	float mark;
};
Stu InputforO(Stu);
void OutputforO(Stu);
void InputList(Stu *,int *);
void OutputList(Stu *, int);
int main(){
	Stu a[20];
	int n;
	InputList(a,&n);
	OutputList(a,n);
}
Stu InputforO(Stu x){
	printf("Input ID: ");
	//gets(x.ID);
	scanf("%s",x.ID);
	fflush(stdin);
	printf("Input mark: ");
	scanf("%f",&x.mark);
	return x;
}
void OutputforO(Stu x){
	printf("\n\tID, Mark respectively is %s, %.1f",x.ID,x.mark);
}
void InputList(Stu *p, int *k){
	printf("Enter the number of students: ");
	scanf("%d",k);
	for(int i=0;i<*k;i++) 
		p[i]=InputforO(p[i]);
		//InputforO(p[i]);
}
void OutputList(Stu *q, int n){
	for(int i=0;i<n;i++) {
		printf("\nStudent at %d:", i);
		OutputforO(q[i]);
	}
}

