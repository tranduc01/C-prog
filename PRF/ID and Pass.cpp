#include <stdio.h>

int main() {
int id,pass;
	printf("Please enter ID ");
	scanf("%d",&id);
	
	/*if (id == 2021){
		printf("Please enter Password ");
		scanf("%d",&pass);
			if (pass==1234){
				printf("Welcome You");
			} else {
				printf("Incorrect Password");
			}
			
			//(pass == 1234) ? printf("Welcome You") : printf("Incorrect Password");
	} else {
		printf("Incorrect ID");
	} */
		switch(id)
	{
		case 2021:
			printf("Please enter Password ");
			scanf("%d",&pass);
			switch(pass)
			{
				case 1234: printf("Welcome You");
					break;
				default: printf("Incorrect Password");
			}
		break;
		default : printf("Incorrect ID");
	}
return 0;
}


