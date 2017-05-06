#include <iostream>
using namespace std;

class Dortgen
{
public:
	int uk,ks;
	Dortgen(int a,int b)
	{
		uk=a;
		ks=b;
	}
};

class Kare : public Dortgen
{
public:
	int alan;
	
	Kare(int a,int b):Dortgen(a,b){}
	
	void gor()
	{
		alan=ks*2+uk*2;
		
		cout<<"Alan..............:"<<alan<<endl;
	}
};

int main()
{
	Kare a1(20,30);
	
	a1.gor();
	return 0;
}
