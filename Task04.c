#include<stdio.h>
#include<string.h>
main()
{
	char first[20];
	char last[20];
	printf("Enter the first name:");
	scanf("%s",&first);
	printf("Enter the last name:");
	scanf("%s",&last);
	strcat(first, last);
	printf("Full Name:%s",first);
}
