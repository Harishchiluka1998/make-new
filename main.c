#include"header.h"
#include<stdio.h>
int main()
{

	int c,d,choice;
	printf("enter the values");
	scanf(" %d%d",&c,&d);
	printf("enter 1 for sum 2 for sub");
	scanf(" %d",&choice);
	switch(choice)
	{

		case 1:sum(c,d);
		       break;
		case 2:sub(c,d);
		       break;
	}

	return 0;
}
