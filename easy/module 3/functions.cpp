//functions
//you can have n number of functions in your program
//difference between int and void functions
#include<iostream>
using namespace std;

void  get()
{
	int a;
	cout<<"enter the number"<<endl;
	cin>>a;
}

 int ret()
{	
     int a;
	cout<<"helo world this function will return a value"<<endl;
	cout<<"enter a number"<<endl;
	cin>>a;
	return(a);
}
int main()
{
	cout<<"we will call function get here"<<endl;
	get();
	int b= ret();
	cout<<b<<endl;
}
