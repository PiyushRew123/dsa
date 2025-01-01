
#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int x){
int l=0,h=n-1;
for(int i=0;i<n;i++){
    m=(l+h)/2;
    if(arr[m]<x){
        l=m+1;
    }
    else if(arr[m]>=x){
        
    }
}

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    cout<<binary_search(arr,n,x);
    }