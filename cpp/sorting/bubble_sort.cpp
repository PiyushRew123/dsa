#include<iostream>
using namespace std;


int main(){
    int n;
    int s,temp;

    cout<<"Size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
       
    for(int i=0;i<n-1;i++){
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
            }
        }
        
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;}
}