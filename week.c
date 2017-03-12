#include<stdio.h>

int main(){
	char c;
	printf("Enter : ");
	scanf("%c", &c);
	switch(c){
	case 'm':
	case 'M':
	printf("monday");
	break;
	case 't':
	case 'T':
	printf("tuesday or thursday");
	break;
	case 'w':
	case 'W':
	printf("wednesday");
	break;
	case 'f':
	case 'F':
	printf("friday");
	break;
	case 's':
	case 'S':
	printf("saturday or sunday");
	break;
	default:
	printf("invalid");
	break;
	}
}