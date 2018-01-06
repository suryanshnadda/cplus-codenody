//function overriding
#include<iostream>
using namespace std;
class base
{
public:

void fun()
{
	cout<<"travelling is fun"<<endl;
	
}	
};

class child:public base
{
	public:
	void fun()
	{
		cout<<"playing is fun"<<endl;
	}
};
int main()
{

child obj;
obj.fun();	
}
