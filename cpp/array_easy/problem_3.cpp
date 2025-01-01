#include<iostream>
using namespace std;

int sort(int arr[],int n){
  
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
           
        }
    }
  
    return true;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
   if(sort(arr,n)==0)
        cout<<"Array not sorted";
    else{
        cout<<"Array sorted";
    }
   
  
}