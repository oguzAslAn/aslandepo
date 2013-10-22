#include<stdio.h>//temel giriş çıkış fonksiyonları için gerekli kütüphane
#include<cstdlib>//renk kodu girmek için gerekli kütüpane
int main()
{
system("color 47");//arka fonu değiştirmek için kullanılır

printf("\t ASLAN BANKASiNA HOSGELDİNİZ \n\n");//başlangıç menüsü için yazdım
int a,kl;
printf("lutfen hesap numarasini giriniz: ");//hesap numarasını istenmesi için yazılır
scanf("%d",&kl);//numarayı tanımladım
if(kl == 123456789)//doğruluğu için if kullandım 
{
printf("4 haneli sifrenizi giriniz:\a");//şifre istemek için kullandım
scanf("%d",&a);//şifreyi tanımladım
printf("\n");
if(a == 1905)//şifreyi doğrulamak için kullandım 
{
printf("sifre dogru\n\n\n\n\n");//doğruluğunu belirtmek için kullandım
printf("\f");//yeni sayfaya geçmek için kullandım ama işaretle belirtiyor sadece


int i,l,m,t;//tam sayıları tanımladım
float z,x,v;//ondalıklı sayıları tanımladım
printf("\t MENU\n");//
printf("///////////////////////\n\n\n");//
printf("1)para cekme\n\n");//

printf("2)kredi karti hesabim\n\n");  //

printf("3)faize para yatirma\n\n");   //menüyü oluşturdum

printf("4)para transferi\n\n");       //
printf("5)cikis\n\n");                //

printf("tercih ettiginiz numarayi giriniz:");//tercihi girmek için
scanf("%d",&i);//tanımlanan sayıyı istemek için
printf("\n");
printf("\n");
printf("\n");
printf("\n");//yeni işlem başlıyo biraz boşluk bırakmak için yazdım
printf("\n");
printf("\n");
printf("\f");//yeni bi simgeyle işleme başlamak için kullandım


	if(1 == i)//1 tercih seçildiğinde bu işlemi kullansın diye yazdım
{
z=2500;//bankadaki parasını tanımladım
printf("hesap bakiyeniz: 2500 tl\n\n");//hesabındaki parayı görmek için yazdım
printf("cekmek istediginiz parayi futfen giriniz:");//kaç tl çekilmek istendiğini görülmesi için yazdım
scanf("%f",&x);//parayı tanımladım
printf("\n");
if(x <= 2500)//çekilen para 2500 az ise bu fonksiyonu kullasın diye ifi kullandım 
{
	v=z-x;
printf("hesap bakiyeniz:%f\n\n",v);
printf("cekilen tutar:%f\n\n",x);//bilgi vermek için yazdım
printf("paranizi futfen sayiniz.....\a\n\n");
}
else
{
printf("yetersiz bakiye\n\n");//para 2500 üstünde ise uyarı vermek için yazdım
}
}
else if(i == 2)//menüdeki 2 işlemi için yazdım
{
printf("kullanilabilecek limit: 3750 TL\n\n");
printf("kredi karti borcu: 1095 TL\n\n");
printf("kredi karti lim: 5000 TL\n\n");
printf("gecen aydan devredilen borc: 155 TL\n\n");//hesap bilgilerini verdim
printf("asgari odeme tutari: 250 TL\n\n");
printf("Toplam borcunuz: 1250 TL\n\n");
float p,o,ı,u;

printf("yatirilacak tutari lutfen giriniz:");//işlem yapmak için istedim
scanf("%f",&p);//işlemi tanımladım
printf("\n");
if(p>1250)//yatırılan tutar 1250 fazla ise bu işlemi kullansın diye yazdım
{

o=p-1250;

printf("devredilecek tutar:%f\n\n\a",o);//para üstünü kullandığımıza dair bi uyarı 
}
else//1250 tl az ise bu işlemi uygulasın
{
	o=1250-p;
	printf("kalan borcunuz:%f\n\n\a",o);//kalan tutarı belirtmek için
}
}
else if(i == 3)//menü 3 işlem için yazdım
{
int a,s;
float f,c;
printf ("yatirmak istediginiz parayi lutfen giriniz:");//faize yatırmak istenilen parayı öğrenmek için 
scanf("%d",&a);//sayıyı tanımladım
printf("\n");
printf("kac ay bankaya yatirmak istiyosunuz:");//yatırılan zamanı öğrenmek için
scanf("%d",&s);//sayıyı tanımladım
printf("\n");

c=(a*s*0.25/12);//işlemi hesaplattım
f=c+a;//faiz miktarı belirtmek için
printf("hesabiniza eklenecek olan para:%f\n\a\n",f);//toplam parayı belirtmek için
printf("faiz tutari:%f\n\n",c);//faiz miktarını belirtmek için

}
else if(i == 4)//menü 4 işlem için yazdım
{
printf("Havale islemimiz su anda calismamaktadir lutfen daha sonra deneyiniz\n\n");//arızayı belirtmek için birazda senpatik olsun diye yazdım

}
else if(i ==5)//menü 5 seçenek için
{
printf ("isleminiz basariyla gerceklesmistir\n\n");
}

else
	printf("yanlis bi tuslama yaptiniz futfen tekrar deneyiniz \n\n");//menüdeki seçeneklerden başka bi tuşa basılırsa bu seçenek gelsin diye yazdım
}

else
{
	printf("lutfen tekrar deneyiniz:\n");//hesap numarası ve şifre hatalı girilince bilgilendirmek için yazdım
}
}
printf("\n");
printf("bizi tercih ettiginiz icin tesekkurler :D\n\n");
system("pause");//sistemi durdurmakiçin yazdım
}
