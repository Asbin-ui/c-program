// WAP to determine whether a number is odd or even

#include<stdio.h>

int main()
{
	int Number;
	printf("Enter Number:");
	scanf("%d",&Number);
	
	if(Number %2==0)
	{
		printf("%d is an Even Number",Number);
	}
	else
	{
		printf("%d is a Odd Number",Number);
	}
	
	return 0;	
}