#include<stdio.h>
#include<string.h>
main(){

	char firstname[100];
	printf("Enter your name: ");
	gets(firstname);
	
	char lastname[100];
	printf("Enter your name: ");
	gets(lastname);
	
	int strcompare = strcmp(firstname,lastname);
	
	if(strcompare == 0){
		printf("Strings are equal. ");
	}
	else if(strcompare == 1 || strcompare == -1){
		printf("No, they are not equal.");
	}
	
	
}
