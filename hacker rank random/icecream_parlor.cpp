#include <bits/stdc++.h>

using namespace std;

vector <int> icecreamParlor(int m, vector <int> arr) {
    // Complete this function

    int n = arr.size();
    vector<int> vec;
    for(int i =0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==m)
            {
                vec.push_back(i+1);
                vec.push_back(j+1);
            }

        }
    }
    return vec;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int m;
        cin >> m;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        vector <int> result = icecreamParlor(m, arr);
        for (ssize_t i = 0; i < result.size(); i++) {
            cout << result[i] << (i != result.size() - 1 ? " " : "");
        }
        cout << endl;


    }
    return 0;
}

