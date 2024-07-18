//Write a C program that checks two given integers and returns true if at least one of them is 30 or if their sum is 30. In other words, 
//if either of the two integers is 30 or if their sum equals 30, the program will return true.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int ival1, ival2;
	
	printf("Please enter the two numbers : ");
	scanf("%d%d", &ival1, &ival2);
	
	
	if (ival1 == 30 || ival2 == 30 || ival1 + ival2 == 30)
		printf("1\n");	
	else
		printf("0\n");
	
	
	return 0;
}
