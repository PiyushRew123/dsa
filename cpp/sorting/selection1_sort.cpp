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
       
    for(int i=0;i<n;i++){
        int min=arr[i];
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                
                min=arr[j]
        ;   s=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[s];
        arr[s]=temp;
        
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;}
}