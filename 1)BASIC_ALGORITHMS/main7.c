#include <stdio.h>
#include <stdlib.h>

//1'den 100'e kadar olan sayılarının küplerinin toplamını bulan program

int kup_al(int x)
{
	return x * x * x;
}



int main(int argc, char *argv[]) {
	
	int i;
	int sum = 0;
	
	for(i = 1; i <= 100; ++i)
	{
		sum += kup_al(i);
	}

	printf("Sonuc = %d\n", sum);
}
