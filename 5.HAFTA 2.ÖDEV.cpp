#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int bas_top(int sayi)
{
    int toplam = 0;

    while (sayi != 0)
	  {
        toplam += sayi % 10; // Say�n�n birler basama��n� al�p toplama ekler
        sayi /= 10; // Say�y� bir basamak sola kayd�r�r
    }
	return toplam;
}

int main() 
{
    int sayi,sonuc=0;
    
    printf("Basamak degerleri hesaplanack sayiyi girin: ");	scanf("%d", &sayi);

    sonuc = bas_top(sayi);
    
	printf("Basamak degerlerinin toplami: %d\n", sonuc);
	
	getch();
    return 0;
}

