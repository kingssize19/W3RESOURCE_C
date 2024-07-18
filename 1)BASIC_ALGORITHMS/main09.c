#include <stdio.h>
#include <stdlib.h>

//Çarpma işlemini toplama işlemi kullanarak bulan program.

int sum(int x, int y)
{
	int result = 0;
	
	while (x--)
		result += y;
	
	return result;	
}

int main(int argc, char *argv[]) {

	int ival1, ival2;
	
	printf("Please enter the two numbers : ");
	scanf("%d%d", &ival1, &ival2);
	
	printf("%d * %d = %d\n", ival1, ival2, sum(ival1, ival2));
	

}
