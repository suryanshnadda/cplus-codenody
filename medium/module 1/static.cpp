#include<iostream>
using namespace std;
 
class base
{
public:
    static int i;
     
    base()
    {
       
    };
    
    void sub(int d)
    
{
	i=d;
}
};
 
int base::i = 1;
 
int main()
{
    base obj;
    obj.sub(394);
    obj.sub(305);
    obj.sub(314);
    obj.sub(352);
    obj.sub(342);
    obj.sub(365);
    // prints value of i
    cout << obj.i; 
}
