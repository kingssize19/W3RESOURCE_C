#include <stdio.h>
#include <stdlib.h>

//Girilen sayının faktöriyelini bulan program

int fact(int x)
{
	int fact = 1;
	
	if (!x)
		return fact;
		
	while (x > 0) {
		
		fact *= x;
		--x;
	}
		
		
	return fact;
}


int main(int argc, char *argv[]) {

	int ival;
	
	printf("Please enter the number (positive number or zero): ");
	scanf("%d", &ival);
	
	printf("%d! = %d\n", ival, fact(ival));
	
	return 0;
}
