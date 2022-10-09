// Bubble sort (optimized for best case)
#include <iostream>
using namespace std;

int main() {
    int arr[5]={12,45,23,51,8};
    bool flag=true;
    
    for(int i=1;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false; // flag is set if there is a swap
            }
        }
        if(flag)
           break; // exit if the array is already sorted
    }
    
    for(int k=0;k<5;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}