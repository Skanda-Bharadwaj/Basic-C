#include<stdio.h>
#include<string.h>

int main(){
	char s[10], a[10];
	int i,k=0;
	printf("print : ");
	scanf("%s", s);
	printf("%s\n", s);

	for(i=(strlen(s)-1); i>=0; i--){
		a[k]=s[i];
		k++;
	}

	printf("%s\n", a);
}