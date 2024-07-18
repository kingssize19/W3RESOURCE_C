#include <stdio.h>
#include <stdlib.h>

//Girilen sayının kaç basamaklı olduğunu söyleyen program

int bas_sayi(int n)
{
	int count = 0;
	
	if (n == 0)
		return 1;
		
	while(n) {
		
		n /=10;
		count++;
	}
	
	return count;
}




int main(int argc, char *argv[]) {

	int ival;
	
	printf("Lutfen bir sayi giriniz : ");
	scanf("%d", &ival);
	
	printf("%d sayisi %d basamakli.", ival, bas_sayi(ival));

	
	return 0;
}
