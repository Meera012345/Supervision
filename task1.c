#include<stdio.h>
main()
{
	FILE *p;
	char data[1000]="My Name is Meera.";
	
	p=fopen("empty.txt","w");
	if(p==NULL)
	{
		printf("This file is could not open.\n");
	}
	else
	{
		printf("Enter data you want to input in text file:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data add successfully..........");
	}
	fclose(p);
}
