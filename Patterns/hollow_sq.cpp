#include <iostream>
using namespace std;

int main()
{
    int r,c;
    
    cout<<"enter no of rows \n";
    cin>>r;
    cout<<"enter no of columns \n";
    cin>>c;
    
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            if(i==1 || i==r)
            {
                cout<<"* ";
            }
            
            else if (j==1 || j==c)
            {
                cout<<"* ";
            }
            
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return(0);
}