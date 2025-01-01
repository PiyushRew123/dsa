#include<iostream>
using namespace std;

int subarray(int arr[],int n,int k){
    int s=0;
    int count=0;
    int max_len=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            s+=arr[j];
            count++;
            if(s==k){
                if(count>max_len){
                    max_len=count;
                }
            }
        }
        count=0;
        s=0;
    }
    return max_len;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k:";
    cin>>k;
    cout<<"maximum length of subarray with sum k:"<<subarray(arr,n,k);
}