#include <iostream>
using namespace std;

int left_rotate(int arr[],int n){
        int temp=arr[0];
        
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Roatation times:";
    int d;
    cin>>d;
    for(int i=0;i<d;i++){
    left_rotate(arr,n);}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



}