#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,sayi,toplam=0,ort,sayac=0;
	
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	
		while(sayi<0)
		{	
			printf("Yanlis veri girdiniz.Tekrar deneyiniz.");
			printf("\nSayi giriniz:");
			scanf("%d",&sayi);
		}	
	
		for(i=0;i<=sayi;i+=2){
		  toplam=toplam+i;
		  sayac++;
		}
		
		printf("Girilen sayiya kadarki sayilarin toplam:%d",toplam);
		printf("\n");
		
		ort=toplam/sayac;
		printf("Girilen sayiya kadarki sayilarin ortalamasi:%d",ort);
		
	getch();	
	return 0;
}
