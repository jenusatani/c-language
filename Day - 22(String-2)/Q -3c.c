#include<stdio.h>
#include<string.h>

main(){
	char name[100];
	printf("Enter Your Name :");
	gets(name);
	printf("%d",strlen(name));
	
	return 0;
}
