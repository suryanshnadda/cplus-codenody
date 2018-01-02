//to find factorial of the number
#include<iostream>
using namespace std;
int main()
{
    long long int a;
	cout<<"enter a number"<<endl;
	cin>>a;
    int l=a;
   for(int i=1;i<l;i++)
	{
	    	a=a*i;
	    	
	}
	cout<<"factorial is "<<a<<endl;
	return(0);
}
