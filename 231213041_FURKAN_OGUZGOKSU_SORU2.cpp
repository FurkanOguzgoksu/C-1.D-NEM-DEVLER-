#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    int dizi1[10],dizi2[10];

    printf("1.Sayi Dizisi\n\n");
    for (int i = 0; i < 10; i++) 
	{
        printf("%d.sayiyi girin:",i+1);
        scanf("%d",&dizi1[i]);
    }
	printf("\n\n2.Sayi Dizisi\n\n");
    for (int i = 0; i < 10; i++) 
	{
        printf("%d.sayiyi girin:",i+1);
        scanf("%d",&dizi2[i]);
    }
    printf("\n");  
 // Çift ve tek indislerin yerlerini deðiþtirme
    for (int i = 0; i < 10; i += 2) {
        
            int temp = dizi1[i];
            dizi1[i] = dizi2[i + 1];
            dizi2[i + 1] = temp;
	}
    printf("\n\nYeni 1.Sayi Dizisi\n\n");
    for (int i = 0; i < 10; i++) 
	{
        printf("|%d|", dizi1[i]);
    }
    printf("\n");
	printf("\n\nYeni 2.Sayi Dizisi\n\n");
    for (int i = 0; i < 10; i++) 
	{
        printf("|%d|", dizi2[i]);
    }
    printf("\n");
	
	getch();
    return 0;
}

