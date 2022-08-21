#include <bits/stdc++.h>

using namespace std;

long long sherlockAndMinimax(vector <long long> arr, long long p, long long q,int n) {
    // Complete this function

    long long min = q;
    vector<int>ans;
    long long sum;
    for(int i = p;i<=q;i++)
    {
        for(int j = 0; j<n ; j++)
        {
            sum = abs(arr[j]-i);
            if(sum<=min)
            {
                min = sum;
            }
        }
        ans.push_back(min);
        min = q;
    }
    long long max= *max_element(ans.begin(),ans.end());
    int j=0;
    for(int i = p; i<=q; i++)
    {
        if(ans[j]==max)
            return i;
        j++;
    }

    return -2;
}

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    long long p;
    long long q;
    cin >> p >> q;
    long long result = sherlockAndMinimax(arr, p, q,n);
    cout << result << endl;
    return 0;
}
