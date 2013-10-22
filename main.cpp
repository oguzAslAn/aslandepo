#include<stdio.h>
#include<conio.h>
#include<cstdlib>
int main()
{
system("color 47");
printf("\t ASLAN BANKASiNA HOSGELDİNİZ \n\n");
int a;
printf("4 haneli sifrenizi giriniz:\a");
scanf("%d",&a);
printf("\n");
if(a == 1905)
{
printf("sifre dogru:\n\n\n\n\n");
printf("\f");


int i,l,m,t;
float z,x,v;
printf("\t MENU\n");
printf("///////////////////////\n\n\n");
printf("1)para cekme\n\n");

printf("2)kredi karti hesabim\n\n");

printf("3)faize para yatirma\n\n");

printf("4)para transferi\n\n");

printf("tercih ettiginiz numarayi giriniz:");
scanf("%d",&i);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\f");

if(1 == i)
{
z=2500;
printf("hesap bakiyeniz: 2500 tl\n\n");
printf("cekmek istediginiz parayi futfen giriniz:");
scanf("%f",&x);
printf("\n");
if(x <= 2500)
{
	v=z-x;
printf("hesap bakiyeniz:%f\n\n",v);
printf("cekilen tutar:%f\n\n",x);
printf("paranizi futfen sayiniz.....\a\n\n");
}
else
{
printf("yetersiz bakiye\n\n");
}
}
else if(i == 2)
{
printf("kullanilabilecek limit: 3750 TL\n\n");
printf("kredi karti borcu: 1095 TL\n\n");
printf("kredi karti lim: 5000 TL\n\n");
printf("gecen aydan devredilen borc: 155 TL\n\n");
printf("asgari odeme tutari: 250 TL\n\n");
printf("Toplam borcunuz: 1250 TL\n\n");
float p,o,ı,u;

printf("yatirilacak tutari lutfen giriniz:");
scanf("%f",&p);
printf("\n");
if(p>1250)
{

o=p-1250;

printf("devredilecek tutar:%f\n\n\a",o);
}
else
{
	o=1250-p;
	printf("kalan borcunuz:%f\n\n\a",o);
}
}
else if(i == 3)
{
int a,s;
float f,c;
printf ("yatirmak istediginiz parayi lutfen giriniz:");
scanf("%d",&a);
printf("\n");
printf("kac ay bankaya yatirmak istiyosunuz:");
scanf("%d",&s);
printf("\n");

c=(a*s*0.25/12);
f=c+a;
printf("hesabiniza eklenecek olan para:%f\n\a\n",f);
printf("faiz tutari:%f\n\n",c);

}
else if(i == 4)
{
printf("Havale islemimiz su anda calismamaktadir lutfen daha sonra deneyiniz\n\n");

}
else
	printf("yanlis bi tuslama yaptiniz futfen tekrar deneyiniz \n\n");
}

else
{
	printf("lutfen tekrar deneyiniz:\n");
}
printf("\n");
printf("bizi tercih ettiginiz icin tesekkurler :D\n\n");
system("pause");
}
