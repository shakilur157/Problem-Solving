#include <bits/stdc++.h>

using namespace std;

vector <string> cavityMap(vector <string> arr)
{
    int n = arr.size() ;
    for(int i = 1 ; i < n-1 ; i++)
    {
        for(int j = 1 ; j < n-1 ; j++)
        {
            if( arr[i][j]-48 > arr[i-1][j]-48 &&
                arr[i][j]-48 > arr[i+1][j]-48 &&
                arr[i][j]-48 > arr[i][j-1]-48 &&
                arr[i][j]-48 > arr[i][j+1]-48 )
                    arr[i][j] = 'X';
        }
    }
    return arr ;
}

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0; grid_i < n; grid_i++){
       cin >> grid[grid_i];
    }
    vector <string> result = cavityMap(grid);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
