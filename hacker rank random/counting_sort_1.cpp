#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    int max_val=0;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
        int val;
        cin>>val;
        arr[val]++;
        if(max_val<val)
        {
            max_val=val;
        }
    }

    for (ssize_t i = 0; i <=max_val; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;


    return 0;
}
