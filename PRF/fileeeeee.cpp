#include <stdio.h>

int main(void){
	FILE *f;
	int num;
	f=fopen("integers","w");
	if(f!= NULL){
		printf("File created successfully!\n");
	}else{
		printf("File created fail!\n");
		return -1;
	}
	printf("Enter integer number[Enter -1 to exit]: ");
	while(1){
		scanf("%d",&num);
		if(num!=-1){
			putw(num,f);
		}else{
			break;
		}
	}
	fclose(f);
	f=fopen("integers","r");
	printf("\nNumber\n");
	while((num=getw(f))!= EOF){
		printf("%d\n",&num);
	}
	fclose(f);
	return 0;
}


