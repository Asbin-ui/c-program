// WAP to determine whether number 1 is greater or number 2

#include<stdio.h>

int main()
{
	int firstnumber, secondnumber;
	printf("Enetr First Number:");
	scanf("%d",&firstnumber);
	
	printf("Enetr Second Number:");
	scanf("%d",&secondnumber);
	
	if(firstnumber != secondnumber)
	{
		if(firstnumber>secondnumber)
		{
			printf("%d is greater", firstnumber);
		}
		else
		  {
			printf("%d is smaller",secondnumber);
		  }
	}
	else
	{
			printf("%d=%d",firstnumber,secondnumber);
	}
		
		
		return 0;
}