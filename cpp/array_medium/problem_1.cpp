#include<bits/stdc++.h>
using namespace std;

int _2sum(vector <int> & arr,int n,int target){
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i!=j){
        int s=arr[i]+arr[j];
        if(s==target){
        cout<<"Yes"<<endl;
    cout<<"["<<i<<","<<j<<"]";
    break;
    }
    else if(s<target){
        i++;
    }
    else {
        j--;
    }
      if(i==j){
    cout<<"No"<<endl;
    cout<<"["<<"-1"<<","<<"-1"<<"]";
    }
    }
  
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target sum:";
    cin>>target;
    _2sum(arr,n,target);

}