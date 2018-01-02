//find number of multiples of 3 and 5 between  0 and 1000 and their sum
#include<iostream>
using namespace std;
int main()
{
	
	int i=0;
	int a=0;
	int s=0;
	for(int i=0;i<=1000;i++)
    {
    	if(i%3==0 && i%5==0)
    	{
    		
    		a=a+i;
    		s++;
		}
	}
	cout<<"number of multiples\t"<<s<<endl;
	cout<<"sum of the multiples\t"<<a;
}
