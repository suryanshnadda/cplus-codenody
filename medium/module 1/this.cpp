// this pointer 
#include<iostream>
using namespace std;
class base
{
	public:
	int a;
	int b;
	
	void change(int a,int b)
	{
		this->a=a;
		this->b=b;	
	}
	
		void dis()
	{
	cout<<a<<endl;
	cout<<b<<endl;	
	}
};
int main()
{
		base obj;
		obj.change(45,67);
	    obj.dis();
}
