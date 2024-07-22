//Kullanıcının while döngüsü kullanarak 0 girene  kadar bir dizi tam sayı girmesini isteyen bir C programı yazın. Girilen tüm pozitif tam sayıların toplamını hesaplayın ve yazdırın.

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int ival;
	int sum = 0;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &ival);
	
	while (ival != 0){
		sum += ival;
		printf("Lutfen bir sayi giriniz : ");
		scanf("%d", &ival);
			
	}
	
	printf("sum = %d\n", sum);	
	
	return 0;
}
