//pointer to pointer
#include<iostream>
using namespace std;
int main()
{
	int e=9;
	int *b;
	b = &e;	
		cout<<"the value stored in pointer"<<endl;
	//pointer to pointer
	int **c;
	c=&b;

	cout<<**c;
	
}
