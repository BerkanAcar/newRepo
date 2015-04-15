#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>

int obeb(int sayi1, int sayi2)
{
	int i = 0;
	int sonuc = 0;
	for (i = 1; i <= sayi1 + sayi2; i++)
		if (sayi1%i == 0 && sayi2%i == 0)
		{
			sonuc = i;
		}
	return sonuc;
}
int main()
{
	int sayi1 = 0, sayi2 = 0;
	printf("Bir sayi giriniz:");
	scanf("%d", &sayi1);
	printf("Baska bir sayi giriniz:");
	scanf("%d", &sayi2);
	printf("\nobeb:%d", obeb(sayi1, sayi2));
	system("pause");
}