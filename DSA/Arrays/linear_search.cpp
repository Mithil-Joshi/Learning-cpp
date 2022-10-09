//Linear Search
#include <iostream>
using namespace std;

int linersearch(int arr[],int n,int key){
        for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;   
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
        cin>>arr[i];
    }
    
    cout<<"enter the value to search for \n";
    cin>>key;
    
    cout<<"\n"<<linersearch(arr,n,key);
    
    return 0;
}