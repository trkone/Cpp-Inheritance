#include <iostream>
using namespace std;

class Matamatik
{
public:
	double yaricap;
};

class PI_sayisi
{
protected:
	double PI = 3.14;
};

class Daire :public  Matamatik, protected PI_sayisi
{
public:
	void alan()
	{
		cout<<"Alan........:"<<yaricap*yaricap*PI<<endl;
	}
};

int main()
{
	Daire a1;
	
	cout<<"Matamatik sinifindan turetilmis Dairenin yaricapi......:";
	cin>>a1.yaricap;
	
	a1.alan();
	
	return 0;
}
