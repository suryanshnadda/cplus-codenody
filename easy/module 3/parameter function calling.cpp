//functions with parameters
#include<iostream>
using namespace std;



int cal(int a)
{
	
	cout<<"this function calculates square of number"<<endl;
	cout<<a*a<<endl;	
}
int main()
{
	int a;
	
	cout<<"enter a number"<<endl;
	cin>>a;
cal(a);	
}
