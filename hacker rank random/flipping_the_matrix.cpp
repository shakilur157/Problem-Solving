#include <bits/stdc++.h>

using namespace std;

long long flippingMatrix(vector < vector<long long int> > matrix,long long int n) {
    // Complete this function
    long long int sum =0;
    long long int len = n*2;

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum = sum+ max(max(matrix[i][j],matrix[i][len-1-j]), max(matrix[len-1-i][j],matrix[len-1-i][len-1-j]));
        }
    }
    return sum;

}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector< vector<long long int> > matrix(2*n,vector<long long int>(2*n));
        for(int matrix_i = 0;matrix_i < 2*n;matrix_i++){
           for(int matrix_j = 0;matrix_j < 2*n;matrix_j++){
              cin >> matrix[matrix_i][matrix_j];
           }
        }
        long long int result = flippingMatrix(matrix,n);
        cout << result << endl;
    }
    return 0;
}

