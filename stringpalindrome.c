#include<stdio.h>
#include<string.h>

int main(){
	char a[100], b[100];
	int i,k,m=0;
	printf("Enter : \n");
	scanf("%s", a);

	for(i=strlen(a)-1; i>=0; i--){
		b[k]=a[i];
		k++;
	}
	
	printf("%s\n", b);

	for(i=0, k=0; i<=strlen(a)-1, k<=strlen(b)-1; i++,k++){
		if (a[i] == b[k]){
			m++;
		}
		else 
			break;
	}

	printf("m=%d, sl=%lu\n", m, strlen(b));

	if(m==strlen(b))
		printf("Yes\n");
	else
		printf("No\n");
	
}