#include <stdio.h>
#include <stdlib.h>

//Girilen 3 basamaklı bir sayının basamaklarının küpleri toplamı sayının kendine eşit olup olmadığını bulan program
//Yani 3 basamaklı armstrong sayıları bulan program.

int kup(int x)
{
	return x * x * x;
}

int func(int x)
{
	int sum = 0;
	
	while (x) {
		
		sum += kup((x % 10));
		x /= 10;
		
	}
	return sum;
}

int main(int argc, char *argv[]) {

	int ival;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &ival);
	
	if (ival == func(ival))
		printf("%d sayisinin basamaklarinin kupleri toplami %d.", ival, func(ival));
	else
		printf("%d sayisi kriterlere uygun degil.", ival);

	
	return 0;
}




int main(int argc, char *argv[]) {

	int ival;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &ival);
	
	printf("%d sayisi %d basamakli.", ival, bas_sayi(ival));

	
	return 0;
}
