#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	char metin[100],kelime[50];
	int i,adet1=0,adet2=0;
	
	printf("Metin giriniz:");
	gets(metin);
	
	printf("Arancak kelime giriniz:");
	gets(kelime);
	
	for(i=0;metin[i]!='\0';i++)
	{
		adet1++;
	}
	for(i=0;kelime[i]!='\0';i++)
	{
		adet2++;
	}
	int cikis=0;
	
	for(i=0;i<adet1;i++)
	{
		if(kelime[0]==metin[i])
		{
			int kontrol=1;
			if(!(metin[i+adet2]=='\0' || metin[i+adet2]==' '))
			{
				kontrol=0;
				continue;
			}
			for(int j=1;j<adet2;j++)
			{
			 	if(kelime[j]!=metin[i+j])
			 	{
			 		kontrol=0;
			 		break;
				}
			}
			if(kontrol)
			{
				cikis=1;
				printf("Aradiginiz kelime bulundu.\n Kelimenin ba�lang�c konumu %d",i+1);
			}
		}
	}
	if(!cikis)
	{
		printf("Aradiginiz kelime bulunamadi.");	
	}
	getch();
	return 0;
}
