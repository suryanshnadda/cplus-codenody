#include<iostream>
using namespace std;
class base
{
public:

virtual void fun()
{
	cout<<"this function is in base class"<<endl;
	
	}	
};

class child:public base
{

void fun()
{
	cout<<"this function is in child class"<<endl;
	}	
};
int main()
{
base *a;
child b;
a=&b;
a->fun();	
}
