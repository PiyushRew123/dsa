#include<iostream>
using namespace std;

int largesum_subarray(int arr[],int n){
    int s=0;
    int large_sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s>large_sum){
                large_sum=s;
            }
        }s=0;
    }
    return large_sum;
}

int main(){
    int n;
    cin>>n;
    int arr[n];//={-2,1,-3,4,-1,2,1,-5,4};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largesum_subarray(arr,n);
}

// #include <bits/stdc++.h>
// using namespace std;

// long long maxSubarraySum(int arr[], int n) {
//     long long maxi = LONG_MIN; // maximum sum
//     long long sum = 0;

//     for (int i = 0; i < n; i++) {

//         sum += arr[i];

//         if (sum > maxi) {
//             maxi = sum;
//         }

//         // If sum < 0: discard the sum calculated
//         if (sum < 0) {
//             sum = 0;
//         }
//     }

//     // To consider the sum of the empty subarray
//     // uncomment the following check:

//     //if (maxi < 0) maxi = 0;

//     return maxi;
// }

// int main()
// {
//     int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     long long maxSum = maxSubarraySum(arr, n);
//     cout << "The maximum subarray sum is: " << maxSum << endl;
//     return 0;
// }

