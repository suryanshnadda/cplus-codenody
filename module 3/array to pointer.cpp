//array to pointer
//in tihs 
#include<iostream>
using namespace std;
int main()
{
	const int end =5;
	
	int a[end]={12,8,67,54,47};
	int *b[end];
	
	for(int i=0;i<5;i++)
	{
	 b[i]=&a[i];
	 cout<<*b[i]<<endl;
	}
}
