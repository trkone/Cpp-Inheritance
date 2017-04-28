#include <iostream>
using namespace std;

class Sinif
{
public:
	int ssa;
};

class Turetilmis: public Sinif
{
public:
	int ttb;
};

int main()
{
	Turetilmis a1;
	
	a1.ttb=15;
	a1.ssa=20;
	
	cout<<a1.ttb<<a1.ssa<<endl;
	
	return 0;
}
