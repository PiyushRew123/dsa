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

    for (int i=0;i<100000;i++){
        if(hash[i]>0){
            cout<<i<<" "<<hash[i]<<endl;
        }
    }
}