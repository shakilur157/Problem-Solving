#include <bits/stdc++.h>

using namespace std;

int introTutorial(int V, vector <int> arr) {
    // Complete this function
    int s = arr.size();
    int ans;
    for(int i=0;i<s;i++)
    {
        if(arr[i]==V)
             ans = i;
    }
    return ans;
}

int main() {
    int V;
    cin >> V;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = introTutorial(V, arr);
    cout << result << endl;
    return 0;
}
