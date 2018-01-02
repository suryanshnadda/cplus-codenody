// arrays
// used to store similier type of data
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<5;i++)
	{
		cout<<"enter number"<<endl;
		cin>>a[i];
		
	}
	cout<<"numbers entered by user"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<endl;	
	}
}
