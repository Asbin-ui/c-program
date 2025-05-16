// WAP to determine whether the given number is positive or negative.

#include<stdio.h>

int main()
{
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("Positive Number");
		
	}
	else
	{
		printf("Negative Number");
	}
	
	return 0;
	
	
}