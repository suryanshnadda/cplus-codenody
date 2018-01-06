//multiuple inheritance
#include<iostream>
using namespace std;
class baseone{
	public:
	void car()
	{
		cout<<"car has four tyres"<<endl;	
	}
	
};

class basetwo
{
 public:
 void bike()
 {
 	cout<<"bike has two wheels"<<endl;	
 }
	
};

class vehicle :public baseone,public basetwo
{
	
};
int main()
{
vehicle obj;
obj.car();
obj.bike();
}

//calling these function from different clases

