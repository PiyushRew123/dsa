//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int long_cons_seq(vector <int> & arr, int n)
{
    sort(arr.begin(),arr.end());
    int i=0;
    int count=1;
    int s=0;
    for(i=0;i<n-1;i++){
        int diff=arr[i+1]-arr[i];
        if(diff==1){
            count++;
            s=max(count,s);
        }
        else{
            count=1;
        }
    }
    return s;

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<long_cons_seq(arr,n);
}