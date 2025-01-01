#include<bits/stdc++.h>
using namespace std;

void leader(int arr[],int n){
    
//     for(int i=0;i<n-1;i++){
//         int a=true;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 a=false;
//             }
//         }
//           if(a==true){
//                 cout<<arr[i]<<" ";
//             }
//     }
//     cout<<arr[n-1];
 }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leader(arr,n);
}