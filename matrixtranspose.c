#include<stdio.h>

int main(){
	int m,n,i,j,a[10][10];
	printf("Rows : ");
	scanf("%d", &m);
	printf("Columns : ");
	scanf("%d", &n);

	printf("\nEnter the values : \n");

	for(i=0; i<m; i++){
		for(j=0; j<n; j++)
			scanf("%d", &a[i][j]);
	}

	printf("\nA is : \n");

	for(i=0; i<m; i++){
		for(j=0; j<n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	printf("\nA' is : \n");

	for(j=0; j<n; j++){
		for(i=0; i<m; i++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

	
}