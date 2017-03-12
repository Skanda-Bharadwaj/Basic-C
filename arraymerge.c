#include<stdio.h>

int main(){
	int i, j, n1, n2, p=0, a1[10], a2[10];
	printf("\nEnter the number of array elements : ");
	scanf("%d", &n1);
	printf("\nEnter the array elements : \n");
	for(i=0; i<n1; i++)
		scanf("%d", &a1[i]);
	printf("\nEnter the number of array elements : ");
	scanf("%d", &n2);
	printf("\nEnter the array elements : \n");
	for(i=0; i<n2; i++)
		scanf("%d", &a2[i]);

	for(i=0; i<n1; i++){
		for(j=i+1; j<n1; j++){
			if(a1[j]==a1[i]){
				for(int k=j; k<n1; k++)
					a1[k]=a1[k+1];
				n1=n1-1;
			}
			else
				a1[i]=a1[i];
		}
	}

	for(i=0; i<n2; i++){
		for(j=i+1; j<n2; j++){
			if(a2[j]==a2[i]){
				for(int k=j; k<n2; k++)
					a2[k]=a2[k+1];
				n2=n2-1;
			}
			else
				a2[i]=a2[i];
		}
	}	

	for(i=0; i<n1; i++){
		for(j=0; j<n2; j++){
			if(a2[j]==a1[i]){
				for(int k=j; k<n2; k++){
					a2[k]=a2[k+1];
				}
				n2=n2-1;
			}
			else
				a2[j]=a2[j];
		}		
	} 

	printf("\n");

	for(i=0; i<n1; i++)
		printf("%d ", a1[i]); 
	for(j=0; j<n2; j++)
		printf("%d ", a2[j]);
	printf("\n \n");	
} 