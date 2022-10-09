//To print fibonaci seriestill n terms
#include <iostream>
using namespace std;

void fibo(int n){
     int f0=0,f1=1,f;
      
     cout<<f0<<" "<<f1<<" ";
      
     for(int i=1;i<=n;i++){
        f=f0+f1;
        f0=f1;
        f1=f;
        cout<<f<<" ";
     }
}

int main() {
    int n;
    cin>>n;
    
    fibo(n);
    
    return 0;
}