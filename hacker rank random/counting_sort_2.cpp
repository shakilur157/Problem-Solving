#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    int max_val=0;
    int min_val=9999999;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
        int val;
        cin>>val;
        arr[val]++;
        if(max_val<val)
        {
            max_val=val;
        }
        if(min_val>val)
        {
            min_val=val;
        }
    }

    for (ssize_t i = min_val; i <=max_val; i++) {
        while(arr[i]!=0)
        {
            cout<<i<<" ";
            arr[i]--;
        }
        //cout << arr[i] <<" ";
    }
    cout << endl;


    return 0;
}

