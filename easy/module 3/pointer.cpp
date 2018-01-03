//pointers
/*
if(ptr)     // succeeds if p is not null
if(!ptr)    // succeeds if p is null
*/


#include<iostream>
using namespace std;
int main()
{

	int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    
	//pointer to integer

	int *b;
	b = &a;
	cout<<*b<<endl;
}
