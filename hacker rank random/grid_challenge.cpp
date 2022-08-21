#include <bits/stdc++.h>

using namespace std;

string gridChallenge(vector <string> grid,int n) {
    // Complete this function

    //vector<vector<string> > ans;
    for(int i =0;i<n;i++)
    {
        sort(grid[i].begin(), grid[i].end());
    }
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        if(grid[i][0]<=grid[i+1][0] && grid[i][n-1]<=grid[i+1][n-1])
        {
            count++;
            //cout<<count<<endl;
        }

    }
    if((count+1)==n)
        return "YES";
    else
        return "NO";


    return "";

}

int main() {
    int t;
    cin >> t;
    int n;

    for(int i =0;i<t;i++)
    {
        cin >> n;
        vector<string> grid(n);
        for(int grid_i = 0; grid_i < n; grid_i++){
           cin >> grid[grid_i];
        }
        string result = gridChallenge(grid,n);
        cout << result << endl;
    }

    return 0;
}

