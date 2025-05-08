// write a program to take input of student as roll number, name, age and gender through literalas

#include<stdio.h>

int main()
{
	int roll = 1;
	int age = 20;
	char gender = 'M';
	char name[20] = "Asbin";
	
	printf("Details:");
	printf("\n");
	printf("roll no.=%d",roll);
	printf("\n");
	printf("age     =%d",age);
	printf("\n");
	printf("name    =%s",name);
	printf("\n");
	printf("gender  =%c",gender);
	
	return 0;
}