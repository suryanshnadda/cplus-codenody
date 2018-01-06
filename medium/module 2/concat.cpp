//string concat
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	
	cout<<"enter two lines having less then 15 characters including spaces"<<endl;
	
	char a[15];
	cin.getline(a,15);
	
	
	char b[15];
	cin.getline(b,15);
	
cout<<strcat(a,b);
}
