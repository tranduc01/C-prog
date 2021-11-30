#include <stdio.h>

int main() {
int n;
    printf("Enter the number ");
    scanf("%d",&n);
    printf("=>"); 
    while(n)
    {
        printf("%d",n%10);
        n=n/10;    
    }
}


