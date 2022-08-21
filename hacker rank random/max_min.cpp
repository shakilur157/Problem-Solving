#include <bits/stdc++.h>

using namespace std;

int angryChildren(int k, vector <int> arr) {
    // Complete this function
    vector<int>ans;
    sort(arr.begin(),arr.end());
    int n= arr.size();
    for(int i = 0; i<=n-k; i++)
    {
        ans.push_back(arr[i+k-1]-arr[i]);
    }
    return *min_element(ans.begin(),ans.end());
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = angryChildren(k, arr);
    cout << result << endl;
    return 0;
}

