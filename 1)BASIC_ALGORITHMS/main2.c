//Write a C program that will take a number as input and find the absolute difference between the input number and 51. 
//If the input number is greater than 51, it will return triple the absolute difference.

#include <stdio.h>
#include <stdlib.h>

int abs(int x)
{
	if (x < 0)
		return -x;
	else
		return x;
}

int main(int argc, char *argv[]) {
	
	int ival;
	
	printf("Please enter the number : ");
	scanf("%d", &ival);
	
	int result;
	
	if (ival > 51)
		result = 3 * (abs(ival - 51));
	else
		result = abs(ival - 51); 
	
	printf("Result = %d\n", result);
	
	return 0;
}
