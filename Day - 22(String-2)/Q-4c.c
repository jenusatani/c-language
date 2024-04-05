#include <stdio.h>
#include <string.h>

main(){
	
	char name[100];
	
	printf("Enter Your Name :");
	gets(name);
	char cpy_name[100];
	
	strcpy(cpy_name,name);
	puts(cpy_name);
		
	
	
	return 0;
}
