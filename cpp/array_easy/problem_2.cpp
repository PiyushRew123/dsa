#include<iostream>
using namespace std;
int sec_large(int arr[],int n){
    int max=arr[0];
    int sec_max=0;
    for (int i=0;i<n;i++){
    if(max<arr[i]){
        sec_max=max;
        max=arr[i];
    }
    else if(arr[i]>sec_max&&arr[i]!=max){
        sec_max=arr[i];
    }
}


return sec_max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second largest element:"<<sec_large(arr,n);
}