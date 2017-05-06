#include <iostream>
using namespace std;


class Sekil
{
public:
	Sekil()
	{
		cout<<"Sekil nesnesi calisti!!!"<<endl;
	}
	~Sekil()
	{
		cout<<"Sekil nesnesi sonlandirildi!!!"<<endl;
	}
};

class Dortgen : public Sekil
{
public:
	Dortgen()
	{
		cout<<"Dortgen nesnesi calisti!!!"<<endl;
	}
	~Dortgen()
	{
		cout<<"Dortgen nesnesi sonlandirildi!!!"<<endl;
	}
};

class Kare : public Dortgen
{
public:
	Kare()
	{
		cout<<"Kare nesnesi calisti!!!"<<endl;
	}
	~Kare()
	{
		cout<<endl
		<<"Kare nesnesi sonlandirildi!!!"<<endl;
	}
};


int main()
{
	{
		Kare a1;
		cout<<endl
		<<"*******************************************"<<endl;
	}
	
	
	
	return 0;
}
