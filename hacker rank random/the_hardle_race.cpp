#include <bits/stdc++.h>

using namespace std;

int hurdleRace(int k, vector <int> height) {
    // Complete this function
    int max_val = *max_element(height.begin(),height.end());

    return (max_val - k >= 0 ? max_val - k : 0);
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    int result = hurdleRace(k, height);
    cout << result << endl;
    return 0;
}
