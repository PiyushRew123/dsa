// #include<iostream>
// using namespace std;

// int rotate_90_(int arr[][10],int n,int m){
//     int temp1,temp2,temp3;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<1;j++){
           
//         }
//     }
// }

// int main(){
//     int n;
//     int m;
//     cin>>n;
//     cin>>m;
//     int arr[n][10];
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     rotate_90_(arr,n,m);
// }
//OPTIMISED

#include<bits/stdc++.h>

using namespace std;
void rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    //transposing the matrix
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "n";
    }

}

