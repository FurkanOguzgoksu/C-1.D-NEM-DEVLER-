#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int faktoriyel(int sayi) 
{
    int i, faktoriyel = 1;
    for (i = 1; i <= sayi; i++)
	{
        faktoriyel = faktoriyel * i;
    }
    return faktoriyel;
}

int main() 
{	
	printf("Kombinasyon islemi su sekildedir -> C(n,r)= n! / (r! * (n-r)!) \n");
    int n, r, sonuc = 0;
	do {
        printf("Kombinasyonda hesaplanacak N degerini giriniz: ");	scanf("%d", &n);

        printf("Kombinasyonda hesaplanacak R degerini giriniz: ");  scanf("%d", &r);

        if (n < 0 || r < 0 || n < r) 
		{
            printf("Kombinasyon kurallarina aykiri islem yapmak istediniz.\nTekrar deneyiniz.\n");
        } 
	else {
            sonuc = faktoriyel(n) / (faktoriyel(r) * faktoriyel(n - r));
            printf("Kombinasyonun isleminin sonucu: %d\n", sonuc);
            break;
        }
    } while (1);

	getch();
    return 0;
}

