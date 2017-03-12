#include<stdio.h>
#include<string.h>

int main(){
	char s1[100], s2[100];
	printf("Enter : \n");
	scanf("%s", s1);
	strcpy(s2,s1);
	printf("%s\n", s2);
	strrev(s2);
	if(strcmp(s2,s1)==0)
	printf("yes\n");
	else
	printf("no\n");
}