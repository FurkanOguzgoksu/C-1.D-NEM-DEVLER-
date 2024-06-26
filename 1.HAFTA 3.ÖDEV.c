#include <stdio.h>
#include <conio.h>

int main()
{
	int sayi1,sayi2,sayi3;
	float ort;
	
	printf("Birinci sayiyi griniz:");
	scanf("%d",&sayi1);
	
	printf("Ikinci sayiyi griniz:");
	scanf("%d",&sayi2);
	
	printf("Ucuncu sayiyi griniz:");
	scanf("%d",&sayi3);
	
	ort=(float)(sayi1+sayi2+sayi3)/3;
	
	printf("Ortalamaniz:%f",ort);
	
	getch();
	return 0;
}
