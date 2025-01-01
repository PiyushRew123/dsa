#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
map<int,int> mpp; //unordered_map<int,int> mpp advantage
for(int i=0;i<n;i++){
    //best case O(1),worst O(N)
    mpp[arr[i]]++;
}
for(auto it:mpp){
    cout<<it.first<<"--->"<<it.second<<endl;
}