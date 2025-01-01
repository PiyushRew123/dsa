#include <iostream>
using namespace std;
int missing(int arr[],int n){
    int sum=0;
    int sum_o=n*(n+1)/2;
    
    for(int i=0;i<n;i++){
        
           sum=sum+arr[i];
      
    }
   
    return sum_o-sum;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Missing number is:"<<missing(arr,n);
}