//Pozitif bir tamsayının 3 veya 7'ye bölünüp bölünmediğini kontrol eden bir C programı yazın. Eğer sayı 3'e veya 7'ye bölünüyorsa program true dönecek, aksi takdirde false dönecek.
#include <stdio.h>
#include <stdlib.h>

int func(int x)
{
	if (x % 7 == 0 || x % 3 == 0)
		return 1;
	
	return 0;
}

int main(int argc, char *argv[]) {
	
	int ival;
	
	printf("Please enter the num : ");
	scanf("%d", &ival);
	
	int flag = func(ival);
	
	if (flag)
		printf("%d sayisi 3 veya 7 ye tam bolunuyor.\n", ival);
	else
		printf("%d sayisi 3 veya 7 ye tam bolunemiyor.\n", ival);
		
	
	return 0;
}
