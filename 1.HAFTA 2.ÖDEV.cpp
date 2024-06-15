#include <stdio.h>
#include <conio.h>

int main ()
{
	int sayi1,sayi2;
	
	printf("Birinci sayiyi giriniz:");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	
	if(sayi1>sayi2){ 	
		printf("Buyuk olan sayi ilk girilen sayidir.");	
	}
	else if(sayi1<sayi2){
		printf("Buyuk olan sayi ikinci girilen sayidir.");
	}
	else
		printf("Girilen sayilar birbirine esittir.");
	
	getch();	
	return 0;	
}

