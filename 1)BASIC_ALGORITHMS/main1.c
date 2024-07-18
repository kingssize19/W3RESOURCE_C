//Write a C program to compute the sum of the two input values. If the two values are the same, then return triple their sum.

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int ival1, ival2;
	
	printf("Please enter the two numbers : ");
	scanf("%d%d", &ival1, &ival2);
	
	int result = ival1 + ival2;
	
	printf("%d + %d = %d\n", ival1, ival2, result);
	
	return 0;
}
