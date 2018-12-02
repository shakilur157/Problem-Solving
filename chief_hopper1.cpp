#include <bits/stdc++.h>

using namespace std;

long long chiefHopper(vector <long long> arr,long long n) {
    // Complete this function
    bool go = true;
    long long count = 0, diff = 0;


    for(int i = n-1; i>=0; i--)
    {
        diff = (diff + arr[i]+1)/2;
        //cout<<total<<endl;

    }

    return diff;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    long long result = chiefHopper(arr,n);
    cout << result << endl;
    return 0;
}


