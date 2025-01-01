#include<iostream>
using namespace std;

int con_ones(int arr[],int n){
    int count=0,s=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
             if(count>s){
             s=count;
            }
        }
        else{
            count=0;
        }
       
        

    }
            int x=max(s,count);
            return x;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<con_ones(arr,n);
}