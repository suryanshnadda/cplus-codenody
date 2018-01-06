// single inheritance
#include<iostream>
using namespace std;

class base
{
public:
base()
{
	cout<<"this is constructor of base class"<<endl;
}
void dis()
{
cout<<"we will call this function from child class"<<endl;	
}	
};
class child:public base
{
	
};

int main()
{
child obj;
obj.dis();
}

//in inheritence we can call functions of base class from derivered class objects
//here you  can see there is no object for base class

