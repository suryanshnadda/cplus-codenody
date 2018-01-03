//friend function
// it can access any privatedata of the class

#include<iostream>
using namespace std;
class base
{

private:
	int don=78;

		friend void sts(base obj);
};
 void sts(base obj)
 {
 	cout<<obj.don;
 }
int main()
{
	base obj;
   sts(obj);
}

