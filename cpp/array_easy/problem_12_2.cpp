#include<bits/stdc++.h>
using namespace std;
//XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
//XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2
XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2
int once(int arr[],int n){
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr=xorr^arr[i];
    }
    return xorr;
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