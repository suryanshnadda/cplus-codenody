#include<iostream>
using namespace std;
class base
{
public:
 int length;
 int breadth;
 
 int cal()
 {
 	return(length*breadth);
 }
};

int main()
{
	
	base obj;
	obj.length=12;
	obj.breadth=13;
	
	int a= obj.cal();
	cout<<"the area is"<<a;
}
