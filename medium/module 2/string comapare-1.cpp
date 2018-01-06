//comparing two strings
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char answer[]="islamabad";
	
	cout<<"enter the capital of pakistan"<<endl;
	char a[20];
	cin>>a;
	
	if(strcmp(answer,a))
	{
		cout<<"your answer is correct"<<endl;
		
	}
	else
	{
		cout<<"wrong answer";
	}
}
