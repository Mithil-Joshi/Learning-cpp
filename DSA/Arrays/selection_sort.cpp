// Selection sort
#include <iostream>
using namespace std;

int main() {
    int arr[5]={12,45,23,51,8};
    
    for(int j=0;j<5-1;j++){
        for(int i=j+1;i<5;i++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    for(int k=0;k<5;k++){
        cout<<arr[k]<<" ";
    }


    return 0;
}