#include <stdio.h>
#include <conio.h>

struct ders
{
    int ders_kodu;
    int vize;
    int final;
    double gecmenotu;
};

struct sahis_bilgileri
{
    char adi[30];
    char soyadi[30];
    int numara;
    struct ders dersler[5];
};

int main()
{
    struct sahis_bilgileri ogrenciler[5];

    printf("Lutfen not girilecek 5 dersin kodunu girin:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d. dersin kodu: ", i + 1);		scanf("%d", &ogrenciler[0].dersler[i].ders_kodu);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\n%d. Ogrenci Bilgileri Girin:\n", i + 1);
        printf("Adi: ");		scanf("%s", ogrenciler[i].adi);
		printf("Soyadi: ");		scanf("%s", ogrenciler[i].soyadi);
		printf("Numarasi: ");	scanf("%d", &ogrenciler[i].numara);

        for (int j = 0; j < 5; j++)
        {
            printf("%d Kodlu dersin vize notunu girin: ", ogrenciler[0].dersler[j].ders_kodu);
            scanf("%d", &ogrenciler[i].dersler[j].vize);

            printf("%d Kodlu dersin final notunu girin: ", ogrenciler[0].dersler[j].ders_kodu);
            scanf("%d", &ogrenciler[i].dersler[j].final);
            printf("\n");

            ogrenciler[i].dersler[j].gecmenotu = (ogrenciler[i].dersler[j].vize * 0.4) + (ogrenciler[i].dersler[j].final * 0.6);
        }
    }
    printf("\n\n*****************************\n\n");

    // Tum bilgileri ekrana yazdirma
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d. Ogrenci Bilgileri:\n", i + 1);
        printf("Ad: %s\n", ogrenciler[i].adi);
        printf("Soyad: %s\n", ogrenciler[i].soyadi);
        printf("Numara: %d\n", ogrenciler[i].numara);

        for (int j = 0; j < 5; j++)
        {
            printf("%d Kodlu dersin ortalama notu: %.2lf\n", ogrenciler[0].dersler[j].ders_kodu, ogrenciler[i].dersler[j].gecmenotu);
        }
    }
    getch();
    return 0;
}

