#include<bits/stdc++.h>
using namespace std;

int max_product(int arr[],int n){
    int i,j,pro=1,maxpro=-8000;
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        pro=arr[j]*pro;
        if(pro>maxpro){
            maxpro=pro;
        }
    }
    pro=1;
}
return maxpro;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    cout<<max_product(arr,n);
}
//OPTIMISED



// #include <bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int> &arr) {
//     int n = arr.size(); //size of array.

//     int pre = 1, suff = 1;
//     int ans = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (pre == 0) pre = 1;
//         if (suff == 0) suff = 1;
//         pre *= arr[i];
//         suff *= arr[n - i - 1];
//         ans = max(ans, max(pre, suff));
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> arr = {1, 2, -3, 0, -4, -5};
//     cout << "The maximum product subarray is: "
//          << maxProductSubArray(arr) << "\n";
//     return 0;
// }

