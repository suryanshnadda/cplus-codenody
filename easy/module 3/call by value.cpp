//call by value
/*

In call by value, original value is not modified.

In call by value, value being passed to the function is locally stored by the function parameter in stack memory location. If you change the value of function parameter, it is changed for the current function only. It will not change the value of variable inside the caller method such as main().

Let's try to understand the concept of call by value in C++ language by the example given below:

*/

#include<iostream>
using namespace std;

void cbv(int a)
{
	
	a=a+5;
	cout<<"value of a in function cbv is"<<a<<endl;
}

int main()
{
	int a;
	cout<<"enter  a number "<<endl;
	cin>>a;
	
	cbv(a);
	cout<<"value of a in function main is"<<a<<endl;
	
	
}
