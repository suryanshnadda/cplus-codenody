//reciprocal cycle
// A unit fraction contains 1 in the numerator. The decimal representation of the unit fractions with denominators 2 to 10 are given
#include<iostream>

using namespace std;
int main()
{	
    int b;
    
    cout<<"enter a  number greater then five"<<endl;
    cin>>b;
    
    for(int i=1;i<b;i++)
    {
    float a=float(1/float(i));
        cout<<a<<endl;
	}
	

}
