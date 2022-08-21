#include <bits/stdc++.h>

using namespace std;

int getMinimumCost(int n, int k, vector < int > c){
    // Complete this function

    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());
    int price = 0;
    for(int i = 0; i < n; ++i) {
        price += ((i / k) + 1) * c[i];
    }
    return price;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0; c_i < n; c_i++){
       cin >> c[c_i];
    }
    int minimumCost = getMinimumCost(n, k, c);
    cout << minimumCost << endl;
    return 0;
}

