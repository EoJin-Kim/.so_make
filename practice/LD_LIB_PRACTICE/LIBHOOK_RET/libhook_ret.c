#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<dlfcn.h>

static int (*hook_strcpy)(char * dst, char * src) = NULL;



int strcpy(char * v1, char *v2)
{
	if(hook_strcpy == NULL) hook_strcpy= dlsym(RTLD_NEXT, "strcpy");
	
	printf("secret key : %s\n", v2);

	return hook_strcpy(v1,v2);
	
return 0;
}

