#include <bits/stdc++.h>

using namespace std;

int jumpingOnClouds(int n,vector <int> c, int k) {
    // Complete this function
    int total = 100;
    for(int i = 0;i <n ; i=i+k)
    {
        //cout<<i<<endl;
        if(c[i]==0)
        {
            total = total-1;
        }
        else
        {
            total= total-3;
        }
    }
    return total;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int result = jumpingOnClouds(n,c, k);
    cout << result << endl;
    return 0;
}
