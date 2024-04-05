#include<stdio.h>
#include<string.h>

main(){
	char name[100];
	printf("Enter Your Name :");
	gets(name);
	puts(strupr(name));
	
	return 0;
}
