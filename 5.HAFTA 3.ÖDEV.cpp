#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int asalMi(int sayi)
{
	if(sayi<=1)
	{
		return 1;	
	}	
	for(int i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int sayi,kontrol=0;
	printf("Bir sayi giriniz:");	scanf("%d",&sayi);
	kontrol = asalMi(sayi);
	
	if(kontrol==0)
	{
		printf("Girilen %d sayisi asaldir.",sayi);
	}
	else
	{
		printf("Girilen %d sayisi asal degildir.",sayi);
	}
	getch();
	return 0;
}
