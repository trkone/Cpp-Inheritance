#include <iostream>
using namespace std;

struct Bolum
{
	string isim,binasi;
	int ders_sayisi;
};

class Insan
{
public:
	string isim,soyisim;
	float boy;
	short int kilo,yas;
};

class Ogrenci : public Insan
{
public:
	Bolum* bilg;
	Ogrenci()
	{
		bilg=new Bolum();
	}
	~Ogrenci()
	{
		delete bilg;
	}
	short int Ogr_no;
};



int main()
{
	Insan Veli;
	Veli.isim="Veli";
	Veli.soyisim="Yildiz";
	Veli.boy=1.70;
	Veli.kilo=70;
	Veli.yas=25;
	
	cout<<"Insan sinifinin Veli nesnesi:"<<endl;
	cout<<"Adi....:"<<Veli.isim <<endl;
	cout<<"Soyadi.:"<<Veli.soyisim <<endl;
	cout<<"Boy....:"<<Veli.boy<<endl;
	cout<<"Kilo...:"<<Veli.kilo<<endl;
	cout<<"Yas....:"<<Veli.yas<<endl;
	
	/////////////////////////////////////////
	
	Ogrenci Ali;
	
	Ali.isim="Ali";
	Ali.soyisim="Demir";
	Ali.boy=1.80;
	Ali.kilo=80;
	Ali.yas=20;
	Ali.Ogr_no=2014;
	Ali.bilg->binasi="Muhendislik fakultesi";
	Ali.bilg->ders_sayisi=142;
	Ali.bilg->isim="Bilgisayar Muhendisligi";
	cout<<"-------------------------------------------"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"Ogrenci sinifinin Ali nesnesi:"<<endl;
	cout<<"Adi....:"<<Ali.isim <<endl;
	cout<<"Soyadi.:"<<Ali.soyisim <<endl;
	cout<<"Boy....:"<<Ali.boy<<endl;
	cout<<"Kilo...:"<<Ali.kilo<<endl;
	cout<<"Yas....:"<<Ali.yas<<endl;
	cout<<"Numarasi:"<<Ali.Ogr_no<<endl;
	
	cout<<endl<<"Bilgiler"<<endl
	<<"Ismi.....:"<<Ali.bilg->isim<<endl
	<<"Binasi...:"<<Ali.bilg->binasi<<endl
	<<"Ders sayi:"<<Ali.bilg->ders_sayisi<<endl;
return 0;}
