#include<stdio.h>
#include<string.h>
main(){
	char firstname[100];
	printf("Enter your name: ");
	
	gets(firstname);
	char lastname[100];
	printf("Enter your name: ");
	gets(lastname);
	
	char fullname[100];
	
	strcpy(fullname,strcat(firstname,lastname));
	printf(" ");
	printf("Full name is :");
	
	puts(fullname);
}
