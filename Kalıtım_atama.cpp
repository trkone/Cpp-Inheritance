#include <iostream>
using namespace std;

class Kare
{
public:
	int alan,uk,ks;
	
	Kare(int a,int b):uk(a),ks(b)	
	{
		alan=2*uk+2*ks;
		
		cout<<"Alan......:"<<alan<<endl;
	}
};

int main()
{
	Kare a1(30,20);
	return 0;
}
