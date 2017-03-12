#include<stdio.h>

int main(){
	int m,n,i,j;
	int a[10][10],b[10][10], c[10][10];
	printf("Enter the dimension : ");
	scanf("%d%d", &m, &n);
	printf("Enter values for matrix A : \n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter values for matrix B : \n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	printf("\n");

	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	
	printf("\n");

	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}

	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}