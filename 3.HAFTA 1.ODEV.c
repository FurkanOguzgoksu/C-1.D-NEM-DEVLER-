//Klavyeden girilen 50 sayılık bir dizinin sayıların tamamını,toplamını,ortalamasını,
//ortalamadan büyük sayı adedini,ortalamadan küçük sayı adedini,ortalamaya eşit sayı adedini veren koddur.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int i,dizi[50],toplam=0,b_sayac,e_sayac,k_sayac;
	float ort; 

	for(i=0;i<50;i++)
	{
		printf("%d. sayi ->",i+1);
		scanf("%d",&dizi[i]);
		toplam=toplam+dizi[i];
	}
	printf("50 sayinin toplami:%d\n",toplam);
	
// Ortalama hesaplama
	ort=(float)toplam/50;
	printf("50 sayinin ortalamasi:%f",ort);
	printf("\n");
	
// Büyük ve küçük sayıları kontrol etme
	for(i=0;i<50;i++)
	{
		if(ort<dizi[i])
		{	b_sayac++;	}
		else if(ort==dizi[i])
		{ e_sayac++;	}
		else 
		{	k_sayac++;	}
	}
	
	printf("Ortalamadan buyuk sayi adedi ->%d\n",b_sayac);
	printf("Ortalamaya esit sayi adedi ->%d\n",e_sayac);
	printf("Ortalamadan kucuk sayi adedi ->%d",k_sayac);
	
	getch();
	return 0;
	
}

