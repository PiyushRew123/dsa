#include<iostream>
using namespace std;

int stock_profit(int arr[], int n){
    int i=1,j=0;
    int s=0,diff=0;
    while(i<n){
        if(arr[i]>arr[j]){
            diff=arr[i]-arr[j];
           // cout<<diff;
            if(diff>s){
                s=diff;
            }
        }
    j--;
        if(j<=0){ i++;
            j=i-1;
           
        }
    }
    return s;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"max profit:"<<stock_profit(arr,n);
}

//OPTIMISED

// #include<bits/stdc++.h>
// using namespace std;

// int maxProfit(vector<int> &arr) {
//     int maxPro = 0;
//     int n = arr.size();
//     int minPrice = INT_MAX;

//     for (int i = 0; i < arr.size(); i++) {
//         minPrice = min(minPrice, arr[i]);
//         maxPro = max(maxPro, arr[i] - minPrice);
//     }
    
//     return maxPro;
// }

// int main() {
//     vector<int> arr = {7,1,5,3,6,4};
//     int maxPro = maxProfit(arr);
//     cout << "Max profit is: " << maxPro << endl;
// }

