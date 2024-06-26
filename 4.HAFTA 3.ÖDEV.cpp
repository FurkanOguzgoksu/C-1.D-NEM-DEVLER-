#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    char metin[100];
    int i = 0;

    printf("Metni girin: ");
    gets(metin);

    while (metin[i] != '\0') 
	  {
        if (metin[i] >= 'A' && metin[i] <= 'Z') 
		{
			// Buyuk harfi kucuk harfe cevirme
            metin[i] = metin[i] + 32; 
        } 
		else if (metin[i] >= 'a' && metin[i] <= 'z') 
		{	
			// Kucuk harfi buyuk harfe cevirme
            metin[i] = metin[i] - 32; 
        }
        i++;
    }
	printf("Degistirilmis metin: %s\n", metin);

	getch();
  return 0;
}

