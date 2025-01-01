#include<iostream>
using namespace std;

int set_zero(int arr[][20],int n,int m){
    int ari[n]={0};
    int arj[m]={0};
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==0){
                ari[i]=1;
                arj[j]=1;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(ari[i]==1||arj[j]==1){
                arr[i][j]=0;  
            }
        }
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>arr[i][j];}
    }
    set_zero(arr,n,m);

}
//OPTIMISED

// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {

//     // int row[n] = {0}; --> matrix[..][0]
//     // int col[m] = {0}; --> matrix[0][..]

//     int col0 = 1;
//     // step 1: Traverse the matrix and
//     // mark 1st row & col accordingly:
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == 0) {
//                 // mark i-th row:
//                 matrix[i][0] = 0;

//                 // mark j-th column:
//                 if (j != 0)
//                     matrix[0][j] = 0;
//                 else
//                     col0 = 0;
//             }
//         }
//     }

//     // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
//     for (int i = 1; i < n; i++) {
//         for (int j = 1; j < m; j++) {
//             if (matrix[i][j] != 0) {
//                 // check for col & row:
//                 if (matrix[i][0] == 0 || matrix[0][j] == 0) {
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }

//     //step 3: Finally mark the 1st col & then 1st row:
//     if (matrix[0][0] == 0) {
//         for (int j = 0; j < m; j++) {
//             matrix[0][j] = 0;
//         }
//     }
//     if (col0 == 0) {
//         for (int i = 0; i < n; i++) {
//             matrix[i][0] = 0;
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: n";
//     for (auto it : ans) {
//         for (auto ele : it) {
//             cout << ele << " ";
//         }
//         cout << "n";
//     }
//     return 0;
// }

