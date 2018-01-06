//namespace 
#include<iostream>
using namespace std;
namespace base
{
void fun()
{
cout<<"this is function in base class"<<endl;
}	
}

namespace baseo
{
	void don()
	{
		cout<<"this is second function of don"<<endl;
	}
}
int main()
{
	base::fun();
	baseo::don();
	}
