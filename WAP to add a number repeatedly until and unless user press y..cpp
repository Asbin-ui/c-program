// WAP to add a number repeatedly until and unless user press y.

#include<stdio.h>

int main()
{
	int firstNumber, secondNumber, result ;
	char option;
	do
	{
		printf("Enter First Number:\n");
	scanf("%d",&firstNumber);
	printf("\n");
	
	printf("Enter second Number:\n");
	scanf("%d",&secondNumber);
	printf("\n");
	
	result = firstNumber + secondNumber;
	
	printf("Addition=%d", result);
	printf("\n");
	printf("Do you want to continue?\n Press y or Y to continue");
	scanf(" %c",&option);
	}
	while(option=='y'|| option=='Y');
	
	return 0;
}
	