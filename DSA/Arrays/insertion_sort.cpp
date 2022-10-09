// Insertion sort
#include <iostream>
using namespace std;

int main() {
    int arr[5]={12,45,23,51,8};
    
    for(int i=1;i<5;i++){
        int current=arr[i];
        int j=i-1;
        
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
    for(int k=0;k<5;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}