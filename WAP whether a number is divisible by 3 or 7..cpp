// WAP whether a number is divisible by 3 or 7.

#include<stdio.h>

int main()
{
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	
	
	if((number %3==0) || (number%7==0))
	{
	
		
		if(number %3==0 && number%7!=0)
		{
			printf("%d is  divisible by 3 but not by 7",number);
		}
		else if((number %3==0) && (number%7==0))
		{
			printf("%d is divisible by 3 and 7",number);
		}
		else
		{
			printf("%d is  divisible by 7 but not by 3",number);
		}
	}
	else
	{
		printf("%d is not divisbile by both 3 and 7");
	}	
	
return 0;
}