//virtual function
/*
C++ virtual function is a member function in base class that you redefine in a derived class. It is declare using the virtual keyword.

It is used to tell the compiler to perform dynamic linkage or late binding on the function.
*/
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
