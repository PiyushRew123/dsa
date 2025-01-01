#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    int hash[100000]={0};
    for(int i=0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }
    int max=0,min=1000000,mx,mn;
    for(int i=0;i<100000;i++){
        if (hash[i]>max){
        max=hash[i];
        mx=i;}
        if(hash[i]>0){
            if(hash[i]<min){
            min=hash[i];
        mn=i;
        }}

    }
    cout<<mx<<" "<<mn;}