#include <iostream>
using namespace std;

int main()
{
    int r;
    
    cin>>r;
    
    for(int i=1;i<=r;i++)
    {
        int j;
        for(j=1;j<=r-i;j++)
        {
            cout<<"_";
        }
        int k=i;
        for(;j<=r;j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=r+i-1;j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
    }

    return 0;
}