#include <bits/stdc++.h>

using namespace std;

long long minimumAbsoluteDifference(long long n, vector <long long> arr) {
    // Complete this function

    sort(arr.begin(),arr.end());
    long long min_i =9999999999;
    for(int i =0;i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1])<min_i)
        {
            min_i= abs(arr[i]-arr[i+1]);
        }
    }
    cout<<min_i<<endl;
    return 0;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    long long result = minimumAbsoluteDifference(n, arr);
    //cout << result << endl;
    return 0;
}
