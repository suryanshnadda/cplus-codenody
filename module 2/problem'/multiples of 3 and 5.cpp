// from 0 to 1000 find all the multiples of 3 and 5
#include<iostream>
using namespace std;
int main()
{
	
	int i;
	
	for(int i=0;i<=1000;i++)
    {
    	if(i%3==0 && i%5==0)
    	{
    		cout<<i<<endl;
    		
		}
	}
}
