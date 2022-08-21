#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(vector <int> c, int n) {
    // Complete this function
    int count = 0;
    for(int i=1;i<n;i++)
    {
        if((c[i]==0) && (c[i+1]==0))
        {
            i++;
        }
        else if((c[i]==0) && (c[i+1]==1))
        {
            ;
        }
        else if((c[i]==1) && (c[i+1]==0))
        {
            i++;
        }
        count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(c,n);
    cout << result << endl;
    return 0;
}
