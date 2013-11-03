#include <stdio.h>
#include<stdlib.h>
int main ()
{   
        int a, b, c, d;//kullanacağımız değişkenleri tanımladım

        printf (" Bir sayi giriniz : ");//hangi sayıya kadar olan asal sayıları istediğni kullanıcıya bildirdim
        scanf  (" %d", &a);//sayıyı tanımladı 

        
        for (b = 2; b < a; b ++)//verilen sayıya kadar olan bütün sayıları yazdırdım.bütün sayılar kendine bölündüğü için eşitlik koymadım
        {
          d = 1;//döngüye girmeyen tek sayı ve bölünmeyen sayılar için yazdım
               for (c = 2; c < b; c ++)//bölen sayıları yazdırdım
               {
             
                  if (b % c == 0)//kalan sıfır ise yazma
                  {
                    d = 0;

                    break;
                  }
          }

          

          if (d == 1) //sadece 1 bölünen sayıları yazdırmak için
			  {
				  printf (" %d \n", b );// sayıları yazmak için kullandım
		  }
          
        }

        system("pause");
}
