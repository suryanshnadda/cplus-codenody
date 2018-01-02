//print right angle triangle

#include<iostream>
using namespace std;
int main()
{
	cout<<"pattern "<<endl;

	int i;
	int j;
	
	for(i=1;i<=5;i++)
	{

		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
