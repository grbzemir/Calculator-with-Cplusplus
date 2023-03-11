#include<iostream>


using namespace std;

int main()

{

system("color 0a");


cout<<"******************************"<<endl;
cout<<"* *"<<endl;
cout<<"* HESAP MAKINESI *"<<endl;
cout<<"* *"<<endl;
cout<<"* Toplama Icin + kullaniniz *"<<endl;
cout<<"* Cikarma Icin - kullaniniz *"<<endl;
cout<<"* Carpma Icin * kullaniniz *"<<endl;
cout<<"* Bolme Icin / kullaniniz. *"<<endl;
cout<<"* kup almak Icin 3 kullaniniz *"<<endl;
cout<<"* us  almak Icin 2 kullaniniz *"<<endl;
cout<<"* karekok almak Icin 1 kullaniniz *"<<endl;
cout<<"* Cikis yapmak icin 0 a basiniz *"<<endl;
cout<<"* *"<<endl;
cout<<"* *"<<endl;
cout<<"******************************"<<endl;
cout<<endl;

baslat:

double sayi1;
double sayi2;
double sonuc;

char islem;
 

cout<<"Islemi giriniz: ";
cin>>islem;
cout<<endl;

cout<<"Birinci sayiyi giriniz: ";
cin>>sayi1;
cout<<endl;
 
 
cout<<"Ikinci sayiyi giriniz: ";
cin>>sayi2;
cout<<endl;
 
switch (islem)

{

case '+':
sonuc = (sayi1+sayi2);
cout<<"Toplamanin sonucu: "<<sonuc<<endl;
break;

case '-':
sonuc = (sayi1-sayi2);
cout<<"Cikarmanin sonucu: "<<sonuc<<endl;
break;

case '*':
sonuc = (sayi1*sayi2);
cout<<"Carpmanin sonucu: "<<sonuc<<endl; 
break;

case '/':
sonuc = (sayi1/sayi2);
cout<<"Bolmenin sonucu: "<<sonuc<<endl; 
break;

case '1':
sonuc = (sayi1*sayi1);
cout<<"karekok almanin sonucu: "<<sonuc<<endl;
break;

case '2':
sonuc = (sayi1*sayi1*sayi1);
cout<<"kup almanin sonucu: "<<sonuc<<endl;
break;

case '3':
sonuc = (sayi1*sayi1*sayi1*sayi1);
cout<<"us almanin sonucu: "<<sonuc<<endl;
break;


case '0':
cout<<"Cikis yapiliyor..."<<endl;
break;


default:
cout<<"Hatali islem girdiniz."<<endl;
break;


}


return 0;

}