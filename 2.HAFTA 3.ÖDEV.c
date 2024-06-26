#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
	int x,sayi=1,teksayac= 0,tektoplam= 0,ciftsayac= 0,ciftcarpim= 1;
	
	while(sayi<=4){
		printf("%d. sayiyi girin:",sayi);
		scanf("%d",&x);
		
		if(x%2==1){ 
      tektoplam=tektoplam + x ;
		  teksayac++;				
    }else{ 
      ciftcarpim=ciftcarpim * x;
		  ciftsayac++;
    }  
	  sayi++;
  }
		printf("\n");
	 
		if(teksayac>0)
			printf("Tek sayilarin aritmetik ortalamasi:%f",(float)tektoplam/teksayac);

		else 
			printf("Tek sayi bulunamadi.Bu yuzden aritmetik ortalama hesaplanmadi.");
	
			printf("\n");
	
		if(ciftsayac>0)
			printf("Cift sayilarin geometrik ortalamasi:%f",pow(ciftcarpim,1.0/ciftsayac));

		else 
			printf("Cift sayi bulunamadi.Bu yuzden geometrik ortalama hesaplanmadi.");	
	
		
	getch();
	return 0;
}
