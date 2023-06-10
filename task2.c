#include<stdio.h>
main()
{
	FILE *p;
	char data[1000];
	p=fopen("fHandling.txt","r");
	if(p==NULL)
	{
		printf("this file can't open....\n");
	}
	else
	{
		while(fgets(data,28,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
