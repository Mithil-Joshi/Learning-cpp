//Binary Search
#include <iostream>
using namespace std;

int Binarysearch(int arr[],int n,int key){
    int s=0,e=n-1;
    
    while(s<=e){
        int mid=(s+e)/2;
        
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main() {
    
    int n,key;
    cout<<"enter the size of array \n";
    cin>>n;
    int arr[n];
    
    cout<<"enter elements the of array \n";
    for(int i=0;i<n;i++){
        //cout<<i;
        cin>>arr[i];
    }
    
    cout<<"enter the value to search for \n";
    cin>>key;
    
    cout<<Binarysearch(arr,n,key);
    
    return 0;
}