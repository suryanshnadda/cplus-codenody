//parameterised constructors
/*
1) Constructor is used for Initializing the values to the data members of the Class.
2) Constructor is that whose name is same as name of class.
3) Constructor gets Automatically called when an object of class is created.
4) Constructors never have a Return Type even void.
5) Constructor are of Default , Parameterized and Copy Constructors.
*/
#include<iostream>
using namespace std;

class base
{
public:
base(int a)
{
	cout<<a*a<<endl;
}
};

int main()
{
	cout<<"square of number is";
	base obj(3);
	return(0);
}
