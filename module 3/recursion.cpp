//recursion
//introduction to recursion
#include<iostream>
using namespace std;
int chk(int a)
{
	a--;
	cout<<a<<endl;
	if(a<=0)
	{
		return(1);
	}
	else
	chk(a);
}

int main()
{
int a;
cout<<"enter a number"<<endl;
cin>>a;	
chk(a);
}
