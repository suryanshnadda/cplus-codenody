/*
In call by reference, original value is modified because we pass reference (address).
Here, address of the value is passed in the function, so actual and formal arguments 
share the same address space. Hence, value changed inside the function, is reflected inside as well as outside the function.
*/
#include<iostream>
using namespace std;
void cbv(int *a)
{
*a=*a+5; 
}
int main()
{
	int a,b;
	cout<<"enter  a number "<<endl;
	cin>>a;
	
	cbv(&a);
	cout<<"value of a in function main is"<<a<<endl;	
}
