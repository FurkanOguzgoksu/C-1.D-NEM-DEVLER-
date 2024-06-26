#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct isci 
{
    char adi[30];
    char soyadi[30];
    int yas;
    double aylikucret;
};
struct isci isci_bilgileri_al() 
{
    struct isci yeni_isci;

  printf("Iscinin adini girin: ");    scanf("%s", yeni_isci.adi);
	printf("Iscinin soyadini girin: "); scanf("%s", yeni_isci.soyadi);
	printf("Iscinin yasini girin: ");   scanf("%d", &yeni_isci.yas);
	printf("Iscinin aylik ucretini girin: ");  scanf("%lf", &yeni_isci.aylikucret);

    return yeni_isci;
}

int main() 
{
  struct isci calisan;
	calisan = isci_bilgileri_al(); 
   
    printf("\nGirilen bilgiler:\n");
    printf("Adi: %s\n", calisan.adi);
    printf("Soyadi: %s\n", calisan.soyadi);
    printf("Yas: %d\n", calisan.yas);
    printf("Aylik ucret: %.2lf\n", calisan.aylikucret);

	getch();
  return 0;
}
    
