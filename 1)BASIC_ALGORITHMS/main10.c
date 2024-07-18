#include <stdio.h>
#include <stdlib.h>

//Bölme işlemini çıkarma işlemi kullanarak yapan program

int divv(int x, int y)
{
	int count = 0;
	
	if (x > y) {
		
		while (x > 0) {
			x -= y;
			count++;		
		}//while
	}//if
	
	else {
		
		while (y > 0) {
			y -= x;
			count++;
		}
	}//else

	return count;
}//div



int main(int argc, char *argv[]) {


	int ival1, ival2;
	
	printf("Lutfen 2 adet sayi giriniz : ");
	scanf("%d%d", &ival1, &ival2);
	
	if (ival1 > ival2)
		printf("%d / %d = %d", ival1, ival2, divv(ival1, ival2));
	else
		printf("%d / %d = %d", ival2, ival1, divv(ival1, ival2));
	
	return 0;
}
