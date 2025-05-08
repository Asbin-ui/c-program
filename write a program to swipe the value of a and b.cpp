// write a program to swipe the value of a and b

#include<stdio.h>

int main()
{
	int firstnumber, secondnumber, temp;
	printf("Enter value of firstnumber:\n");
	scanf("%d",&firstnumber);
	printf("\n");
	
	printf("Enter value of secondnumber:\n");
	scanf("%d",&secondnumber);
	printf("\n");
	
	temp= firstnumber;
	firstnumber=secondnumber;
	secondnumber=temp;
	
	printf("after swapping:");
	printf("\n");
	printf("firstnumber=%d",firstnumber);
	printf("\n");
	printf("secondnumber=%d",secondnumber);
	
	return 0;
}