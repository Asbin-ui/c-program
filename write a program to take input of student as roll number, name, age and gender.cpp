// write a program to take input of student as roll number, name, age and gender

#include<stdio.h>

int main()
{
	int roll, age;
	char gender;
	char name[20];
	printf("Enter roll no.:");
	scanf("%d",&roll);
	printf("Enter age     :");
	scanf("%d",&age);
	printf("Enter name    :");
	scanf("%s",&name);
	printf("Enter gender  :");
	scanf(" %c",&gender);
	
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