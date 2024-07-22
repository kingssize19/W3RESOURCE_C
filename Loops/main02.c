//Palindrome sayı kontrolü yapan program

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	long long int ival;
	long long int r_ival;
	long long int sum = 0;
	
	printf("Lutfen bir adet sayi giriniz : ");
	scanf("%lld", &ival);
	
	r_ival = ival;
	
	while (ival){
		sum = sum * 10 + ival % 10;
		ival /= 10;
	}
	
	if (sum == r_ival)
		printf("%lld sayisi palindrome\n", r_ival);
	else
		printf("%lld sayisi palindrome degil\n", r_ival);
			
	return 0;
}
