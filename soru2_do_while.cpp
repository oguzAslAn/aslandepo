#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	float a=10000000;//A şehrinin nüfusunu değişkene atadım ve virgüllü işlemler olacağından float tanımladım
	float b=40000000;//B şehrinin nüfusunu değişkene atadım ve virgüllü işlemler olacağından float tanımladım
	float c,d;//2 değişkene ihtiyacım vardı 
	int e=0;//yıl sayısını bulmak için bi değişken
	do//işlemler sırayla yapılması için gereken döngü
	{
		c=a/4;
		d=(b*12)/100;  // işlemler
		a=a+c;
		b=b+d;
		e++;
	}
	while(a<b);//işlem koşulu sağlanmayınca döngüden çıksın diye binevi koşul
	printf("bu kadar yil sonra:%d\n",e);//yazdırmak için 
	system("pause");
}
