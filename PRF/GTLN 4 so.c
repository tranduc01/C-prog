#include <stdio.h>
#include <math.h> 
int main() {
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);
int max = (a>b) ? a : b;
max= (max<c) ? c : max;
max= (max<d) ? d : max; 

 if (a==b && b==c && c==d){
	printf("Ko có giá tr? l?n nh?t"); 
} else {

 printf("Gia tri lon nhat la %d",max);
}
return 0;
}


