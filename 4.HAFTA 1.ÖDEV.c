#include <stdio.h>
#include <conio.h>

int main(){
	char metin[100];
	int i,kel_say=0;
	
	printf("Metin giriniz: ");
	gets(metin);
	
	for(i=0;metin[i]!='\0';i++) 
	{
   		while(metin[i]==' ') 
		{
            i++;
        }
        if(metin[i]=='\0') 
		{
            break;
        }
        kel_say++;
    
	    while(metin[i]!=' ' && metin[i]!='\0') 
		{
          	i++;
        }
    }
	printf("Girilen cumledeki kelime sayisi:%d",kel_say);
	
	getch();
	return 0;
}
