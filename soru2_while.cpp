#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float a=10000000;//A şehrinin nüfusunu değişkene atadım ve virgüllü işlemler olacağından float tanımladım
	float b=40000000;//B şehrinin nüfusunu değişkene atadım ve virgüllü işlemler olacağından float tanımladım
	float c,d;//2 değişkene ihtiyacım vardı 
	int e=0;//yıl sayısını bulmak için bi değişken
	while(a<b)
	{
	    c=a/4;              
		d=(b*12)/100;        //işlemler
		a=a+c;
		b=b+d;
		e++;
	}
	printf("%d yil sonra A sehri B sehrini nufusunu gecer\n",e);//A şehri b şehrini geçtiğinde döngüden çıkıp gerekeni buraya yazması için yaptım
	system("pause");
}
