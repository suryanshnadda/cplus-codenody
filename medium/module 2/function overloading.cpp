/*

The term "Polymorphism" is the combination of "poly" + "morphs" which means many forms. It is a greek word. In object-oriented programming, we use 3 main concepts: inheritance, encapsulation and polymorphism.

There are two types of polymorphism in C++:

Compile time polymorphism: It is achieved by function overloading and operator overloading which is also known as static binding or early binding.
Runtime polymorphism: It is achieved by method overriding which is also known as dynamic binding or late binding.


*/
//this is function overloading 

#include<iostream>
using namespace std;
class base
{
public:
	void detail(string a)
	{
		cout<<"your name is"<<a<<endl;
	}
	
	void detail(int b)
	{
		cout<<"your age is"<<b<<endl;
	}
};
int main()
{
	base obj;
	obj.detail("suryansh");
	obj.detail(20);
}
