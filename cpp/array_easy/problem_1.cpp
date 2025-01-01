#include<iostream>
using namespace std;
int large(int arr[],int num){
int max=arr[0];
for (int i=0;i<num;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
        return max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"largest element:"<<large(arr,n);
}