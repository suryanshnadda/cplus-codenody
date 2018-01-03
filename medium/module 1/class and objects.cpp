//class and objects
#include<iostream>
using namespace std;

class base
{
public:
	int count=12;
void text()
{
cout<<"this is text function in base class"<<endl;	
}	
	
};
int main()
{
	base obj ;
	obj.text();
	cout<<obj.count;
}
