#include<stdio.h>
int main()
{

	static char buff[100]="secret key";
	char dstBuff[100]={0,};
	printf("START \n");

	strcpy(dstBuff,buff);

	printf("END \n");
	

return 0;
}
