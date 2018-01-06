//abstract classes
#include<iostream>
using namespace std;
class base
{
	public:
virtual void fun()=0;
};

class childo:base
{
	public:
void fun()
{
	cout<<"programming is fun"<<endl;
	}	
};

class childt:base
{
public:
void fun()
{
	cout<<"programming is great"<<endl;
	}	
};
int main()
{
childo obj;
childt obk;
obj.fun();
obk.fun();
	
}
