#include <stdio.h>
#include<stdlib.h>
int main ()
{   
	int a, b, c, d;//kullanacağımız değişkenleri tanımladım
	int x,y,z,t;//ikinci işlem için kullancağım değişkenler
	


	for (b = 100; 2<b; b --)//100 birer küçülterek asal sayıları bulma işlemi yaptırdım
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

			x=b-2;//bulunan asal sayıların 2 eksiklerinin asal sayı olup olmadığını bulmak için başka bi değişkene atadım
			if(x>1)//asal sayılar 1 den büyük olduğu için küçük sayıları eledim
			{
				z=1;//tam bölünmeyenleri bulmak için yazdım
				for(y=2;y<x;y++)//bölemleri yazdırmak için kullandım
				{
					if(x % y == 0)//bölümden 
					{
						z=0;//kalan sıfır ise

						break;//durdur
					}
				}
				if(z==1)//x in asal olan sayıları buldurma işlemi
				{

					printf("iki basamakli en buyuk ikiz asal sayi %d %d\n",x,b);// bulunan sayıları yazdırma
					break;//en büyüğünü sordurduğu için soru ilk bulduğumuz zaten en büyüktür.



				}
			}

		}
	}
		system("pause");
	
}
