#include<bits/stdc++.h>
using namespace std;

int once(int arr[],int n){
    map<int,int> mpp; 
for(int i=0;i<n;i++){
 
    mpp[arr[i]]++;
}
for(auto it:mpp){
    if(it.second==1){
        return it.first;
    }
}
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Number that appears once:"<<once(arr,n);
    }