#include<stdio.h>

int main(){
	int n,c=0,i;
	printf("Enter the no. : ");
	scanf("%d", &n);
	int a=0,b=1;
	printf("0\n");
    for(i=3; i<=n; i++){
        if(c<n){
        c=a+b;
        b=a;
        a=c;
        if(c<n)
        printf("%d\n", c);
        }
    }
}