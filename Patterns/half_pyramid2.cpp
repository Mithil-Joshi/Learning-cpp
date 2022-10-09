#include <iostream>
using namespace std;

int main()
{
    int r,c;
    
    cout<<"enter no of rows \n";
    cin>>r;
    
    for(int i=r;i>=1;i--)
    {
        for(int j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=r-i+1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}