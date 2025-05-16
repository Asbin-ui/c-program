// WAP to find the multiplication table of 5.

#include<stdio.h>

int main()
{
	int i;
	
	printf("Multiplication table of 5 \n");
	
	for(i=1; i<=10; i++)
	{
		printf("5*%d = %d\n",i,i*5);
	}
	
	return 0;
}