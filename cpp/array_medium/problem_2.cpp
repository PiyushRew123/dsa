// #include<iostream>
// using namespace std;

// int sort_012(int arr[],int n){
// int count_0=0,count_1=0,count_2=0;
// for(int i=0;i<n;i++){
//     if(arr[i]==0){
//         count_0++;
//     }
//     else if(arr[i]==1){
//         count_1++;
//     }
//     else{
//         count_2++;
//     }
// }
// for(int i=0;i<n;i++){
//     if(i<count_0){
//         arr[i]=0;
//     }
//     else if(i<count_0+count_1){
//         arr[i]=1;
//     }
//     else{
//         arr[i]=2;
//     }
// }
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort_012(arr,n);
// }
//Optimised

#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int>& arr, int n) {

    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    sortArray(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

