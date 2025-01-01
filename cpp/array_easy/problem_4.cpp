#include <iostream>
#include<vector>
using namespace std;

int dup_remove(vector <int> & ar1,int arr[],int n){
    ar1.push_back(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1])
    ar1.push_back(arr[i]);
}
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    std::vector<int> ar2;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Without duplicate Array:";
    dup_remove(ar2,arr,n);
    int s=ar2.size();
    for(int i=0;i<s;i++){
    cout<<ar2[i]<<" ";
    }
}

// #include<bits/stdc++.h>

// using namespace std;
// int removeDuplicates(int arr[], int n)
// {
//   int i = 0;
//   for (int j = 1; j < n; j++) {
//     if (arr[i] != arr[j]) {
//       i++;
//       arr[i] = arr[j];
//     }
//   }
//   return i + 1;
// }
// int main() {
//   int arr[] = {1,1,2,2,2,3,3};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   int k = removeDuplicates(arr, n);
//   cout << "The array after removing duplicate elements is " << endl;
//   for (int i = 0; i < k; i++) {
//     cout << arr[i] << " ";
//   }
// }

