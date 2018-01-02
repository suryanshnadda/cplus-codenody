#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int b=10;
	
	if(a>b)
	{
		cout<<"this will not be executed because the condition is wrong"<<endl;
		cout<<"a is geater then b"<<endl;
	}
	
	else if(b>a)
	{
		cout<<"this will  executed because the condition is true"<<endl;
		cout<<"b is geater then a"<<endl;
	}
	
	else
	{
		cout<<"both are equal"<<endl;
	}
	
}

//out of if else and else if only one 
//these are conditional statements
//also add flow diagram to fully explain
