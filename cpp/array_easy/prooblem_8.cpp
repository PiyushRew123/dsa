#include<iostream>
using namespace std;

int linear_search(int arr[],int n,int num){
for(int i=0;i<n;i++){
    if(arr[i]==num){
        return i;
    }
}
} 

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"num to be found: ";
    int num;
    cin>>num;
    cout<<num<<" is present in the index: "<<linear_search(arr,n,num);
}