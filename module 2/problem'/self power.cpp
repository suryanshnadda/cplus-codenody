//self power
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a;
	cout<<"enter a number whose self power you want to find"<<endl;
	cin>>a;
	//using predefind functions
    cout<<pow(a,a);
  // by not using pow function
  
	int b=a;
	int c=a;
	while(b>1)
	{
		a=a*c;
		b--;
	}
	cout<<a;
}
