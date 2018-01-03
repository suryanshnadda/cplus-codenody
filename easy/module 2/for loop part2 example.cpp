#include<iostream>
using namespace std;
int main()

{
    int i,j;

    int hei;

    cout<<"enter the height of pyramid";
    cin>>hei;

    for(i=hei;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<"a";
        }
        cout<<"\n";
    }

}
