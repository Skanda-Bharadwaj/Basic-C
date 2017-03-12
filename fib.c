#include<stdio.h>

int main(){
	int n,c,i;
	printf("Enter the no. : ");
	scanf("%d", &n);
	int a=0,b=1;
	printf("0\n1\n");
    for(i=3; i<=n; i++){
    c=a+b;
    b=a;
    a=c;
    printf("%d\n", c);
    }
}