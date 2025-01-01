#include<iostream>
using namespace std;

int subarray(int arr[],int n,int k){
    int s=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==k){
                count++;
            }
        }
        s=0;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<subarray(arr,n,k);
}