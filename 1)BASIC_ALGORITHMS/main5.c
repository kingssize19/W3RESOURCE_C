#include <stdio.h>
#include <stdlib.h>

//İki sıcaklık değeri alan ve bir sıcaklık 0'dan küçük ve diğer sıcaklık 100'den büyükse true döndüren bir C programı yazın.

int func(double x, double y)
{
	if ((x < 0 && y > 100) || (x > 100 && y < 0))
		return 1;
	
	return 0;
}

int main(int argc, char *argv[]) {
	
	double temp1, temp2;
	
	printf("Please enter the two value for temperature : ");
	scanf("%lf%lf", &temp1, &temp2);
	
	if (func(temp1, temp2))
		printf("True\n");
	else
		printf("False\n");	
	
	return 0;
}
