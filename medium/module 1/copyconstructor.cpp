//copy constructor
#include<iostream>
using namespace std;
class base
{
    public:
  int x , y;
    
base(int a,int b)
{
	x=a;
	y=b;
	
}
  void dis()
  {
  	cout<<x<<y<<endl;
  }

};
int main()
{
	base obj(23,56);
	base ojk =obj;
	obj.dis();
	ojk.dis();
	
}
