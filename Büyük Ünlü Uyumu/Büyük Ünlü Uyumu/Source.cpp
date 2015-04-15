#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


int main()
{
	char chpt[100];
	puts("Bir kelime giriniz:");
	gets(chpt);
	int i = 0, j = 0;
	int uzunluk;
	uzunluk = strlen(chpt);
	for (i = 0; i<uzunluk; i++)
	{
		if (chpt[i] == 'a' || chpt[i] == 'o' || chpt[i] == 'u' || chpt[i] == 'ý')
		{
			for (j = 0; j<uzunluk; j++)
			{
				if (chpt[j] == 'e' || chpt[j] == 'i' || chpt[j] == 'ü' || chpt[j] == 'ö')
				{
					printf("Buyuk Unlu Uyumuna Uymaz");
					system("pause");
					
				}
			}
		}
	}
	for (i = 0; i <= uzunluk; i++)
	{
		if (chpt[i] == 'e' || chpt[i] == 'i' || chpt[i] == 'ü' || chpt[i] == 'ö')
		{
			for (j = 0; j <= uzunluk; j++)
			{
				if (chpt[j] == 'a' || chpt[j] == 'o' || chpt[j] == 'u' || chpt[j] == 'ý')
				{
					printf("Buyuk Unlu Uyumuna Uymaz");
					system("pause");
				}
			}
		}
	}
	printf("Buyuk Unlu uyumuna uyar");
	system("pause");
}