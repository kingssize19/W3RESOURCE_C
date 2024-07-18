#include <stdio.h>
#include <stdlib.h>

//Klavyeden girilen 20 adet sayıdan çift sayıların toplamının tek sayıların toplamına oranını bulan program

// NOT: Tek sayı girilmeme durumuna karşın bölen kısmı 0 olacağı için buda matematikte mümkün olmayacağı için Undefined Behavior'a yol açar.

int main(int argc, char *argv[]) {

	int num[20];
	
	int i = 0;
	
	while (i < 20) {
		printf("%d. elemani girin : ", i + 1);
		scanf("%d", &num[i]);
		++i;
	}
	
	int sum_odd = 0;
	int sum_even = 0;
	
	i = 0;
	
	while (i < 20) {
		if (num[i] % 2 == 0)
			sum_even += num[i];
		else
			sum_odd += num[i];
			
		++i;
	}
	
	double result = (double)sum_even / sum_odd;
	
	printf("\nResult = %lf", result);
	
	
	return 0;
}
