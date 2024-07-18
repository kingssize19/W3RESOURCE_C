#include <stdio.h>
#include <stdlib.h>

//Kullanıcının girdiği iki sayının karelerinin toplamını görüntüleyen program

int square(int x)
{
	return x * x;
}


int main(int argc, char *argv[]) {
	
	int ival1, ival2;
	
	printf("Please enter the two num : ");
	scanf("%d%d", &ival1, &ival2);
	
	int result = square(ival1) + square(ival2);
	
	printf("%d^2 + %d^2 = %d\n", ival1, ival2, result);
	
}
