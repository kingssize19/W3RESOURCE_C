#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

//Klavyeden girilen n adet sayı içerisinden negatif olanların toplamını, çift sayıların çarpımını, 7'ye eşit olanların adetini bulup ekrana yazdıran program

int main(int argc, char *argv[]) {
	
	int num[SIZE];
	int n;
	
	printf("Please enter the size of array : ");
	scanf("%d", &n);
	
	int i = 0;
	
	while (i < n) {
		scanf("%d", &num[i]);
		++i;
	}
	
	int sum_negative = 0;
	int even_multip = 1;
	int count = 0;
	
	for (i = 0; i < n; ++i)
	{
		if (num[i] % 2 == 0)
			even_multip *= num[i];
		
		if (num[i] < 0)
			sum_negative += num[i];
		
		if (num[i] == 7)
			count++;	
	}
	
	printf("ciftlerin carpimi = %d\n", even_multip);
	printf("negatiflerin toplami = %d\n", sum_negative);
	printf("7 ye esit olan sayilarin toplami = %d\n", count);
	
	return 0;
}
