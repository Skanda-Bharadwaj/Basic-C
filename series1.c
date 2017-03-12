#include<stdio.h>

int main(){
	int n,i, s=1;
	printf("No. : ");
	scanf("%d", &n);
	printf("1 ");
	for(i=2; i<=n; i++){
		printf("+ 1/%d ", i);
		s=s+i;
	}
	printf("\nSum = 1/%d\n", s);
}