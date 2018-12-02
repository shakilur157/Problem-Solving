#include <bits/stdc++.h>

using namespace std;

long long sherlockAndMinimax(vector <long long> arr, long long p, long long q,int n) {
    // Complete this function

    vector<int>ans;

    sort(arr.begin(),arr.end());

    long long med,m;

    for(int i = 0; i<n-1 ; i++)
    {
        med = (arr[i]+arr[i+1])/2;
        m = min(med-arr[i],arr[i+1]-med);
        ans.push_back(m);
        cout<<med<<"--"<<m<<endl;
    }



    long long max = *max_element(ans.begin(),ans.end());
    //cout<<max<<endl;
    int j=p;
    for(int i = 0; i<n; i++)
    {
        //cout<<p<<endl;
        if(ans[i]==max)
            return p;
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
    //cout << result << endl;
    return 0;
}

