#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() 
{
    float vize, final, but, ort1, ort2;

    printf("Vize notunuzu giriniz:");
    scanf("%f", &vize);

    printf("\n");

    while (vize < 0 || vize > 100){
        printf("Yanlis veri girdiniz.\n Tekrar vize notunuzu giriniz:");
        scanf("%f", &vize);
        printf("\n");
    }
    printf("Final notunuzu giriniz:");
    scanf("%f", &final);
    printf("\n");

    while (final < 0 || final > 100){
        	printf("Yanlis veri girdiniz.\n Tekrar final notunuzu giriniz:");
        	scanf("%f", &final);
        	printf("\n");
    }

    ort1 = (vize * 0.4) + (final * 0.6);

    if (ort1 >= 60){
        printf("Tebrikler dersi %f ile gectiniz.", ort1);
    } 
	else{
        printf("Maalesef dersten %f ile kaldiniz.\n", ort1);
        printf("Butunlemeye giriniz.\n\n");
        printf("Butunleme notunuzu giriniz:");
        scanf("%f", &but);
        printf("\n");

        while (but < 0 || but > 100){
            	printf("Yanlis veri girdiniz.\n Tekrar butunleme notunuzu giriniz:");
            	scanf("%f", &but);
            	printf("\n");
        }

        ort2 = (vize * 0.4) + (but * 0.6);

        if (ort2 >= 60){
           	    printf("Tebrikler dersi %f ile gectiniz.", ort2);
        	} 
			  else{
            	printf("Maalesef dersten %f ile kaldiniz.\nSeneye tekrar deneyiniz:(", ort2);
        }
    }
    getch();
    return 0;
}

