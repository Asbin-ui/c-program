// Write a program to add subtract and multiply without using results variable

#include<stdio.h>

int main()
{
	int firstnumber, secondnumber;
	printf("Enter firstnumber:\n");
	scanf("%d",&firstnumber);
	printf("\n");
	
    printf("Enter secondnumber:\n");
	scanf("%d",&secondnumber);
	printf("\n");
	
	printf("Addition=%d", firstnumber + secondnumber);
	printf("\n");
	printf("Subtraction=%d", firstnumber - secondnumber);
	printf("\n");
	printf("Multiplication=%d", firstnumber * secondnumber);
	
	return 0;
}