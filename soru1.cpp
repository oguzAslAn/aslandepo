#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,j;//döngüde kullanacağım sayıları girdim.
int toplam=0;//toplamı sıfırdan başlatmak için
for(i=2;i<1000;i++)//ilk döngü 1 den 1000kadar olan sayıları yazdırmak için
{
	toplam=0;//başka bir sayıya geçtiğimizde diğer sayının bölenleriyle toplamasın diye toplamı sıfırladım

for(j=1;j<i;j++)//böleceğimiz sayıların yazan döngü
{
	if(i % j == 0)//kalan sıfırsa tam bölünür
	{
	toplam=toplam+j;//bölünen sayıları toplamak için
	}
}
if(i == toplam)//toplamdığız sayı böldüğümüz sayıya ise
{
		printf("mukemmel sayi:%d\n",toplam);//yazdırdım
}
	}


system("pause");
}
