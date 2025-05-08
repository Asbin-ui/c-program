 //Write a program to add subtract and multiply two numbers 

#include<stdio.h>

int main()
{
	int firstnumber, secondnumber, addresult, subtractresult, multiplyresult;
	printf("Enter firstnumber:\n");
	scanf("%d",&firstnumber);
	printf("\n");
	
	printf("Enter secondnumber:\n");
	scanf("%d",&secondnumber);
	printf("\n");
	
	addresult = firstnumber + secondnumber;
	subtractresult = firstnumber - secondnumber;
	multiplyresult = firstnumber * secondnumber;
	
	printf("Addition=%d",addresult);
	printf("\n");
	printf("Subtraction=%d",subtractresult);
	printf("\n");
	printf("Multiplication=%d",multiplyresult);
	return 0;
	
	

}
