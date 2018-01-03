//constructors
#include<iostream>
using namespace std;
class base
{
public:

base()
{
	cout<<"this is a constructor "<<endl;
	cout<<"a function having same name as class"<<endl;
    	cout<<"when object is declared it calls it automatically"<<endl;
}
	
};
int main()
{
	base obj;
}
