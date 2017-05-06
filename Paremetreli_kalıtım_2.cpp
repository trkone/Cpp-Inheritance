#include <iostream>
using namespace std;


class Sekil
{
public:
	int alan;
	Sekil(int alan): alan(alan){}
};

class Dikdortgen : public Sekil
{
public:
	int ks,uk;
	Dikdortgen(int ks,int uk): ks(ks),uk(uk),Sekil(2*ks+2*uk){}
	
	void yaz()
	{
		cout<<"Uzun kenar...:"<<uk<<endl;
		cout<<"Kisa kenar...:"<<ks<<endl;
		cout<<"ALAN.....:"<<alan<<endl;
	}
};

int main()
{
	Dikdortgen a1(10,5);
	a1.yaz();
	
	return 0;
};
