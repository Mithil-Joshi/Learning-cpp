#include <iostream>
using namespace std;

int main()
{
    int r,count=0;
    
    cout<<"enter no of rows \n";
    cin>>r;
    
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=2*r-2*i;k++)
        {
            cout<<" ";
        }
        for(int l=1;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
        for(int i=r;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int k=1;k<=2*r-2*i;k++)
        {
            cout<<" ";
        }
        for(int l=1;l<=i;l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}