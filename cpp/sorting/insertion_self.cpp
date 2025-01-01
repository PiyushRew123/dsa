#include<iostream>
using namespace std;
void insert(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=i;j>0 && arr[j-1]>arr[j];j--){
            
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    insert(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}