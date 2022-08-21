#include <bits/stdc++.h>

using namespace std;

vector <int> closestNumbers(vector <int> arr,int n) {
    // Complete this function
    sort(arr.begin(),arr.end());
    vector<int>ans;

    int min_dif = abs(arr[0]-arr[1]);
    for(int i = 1; i<n-1;i++)
    {
        if(abs(arr[i]-arr[i+1])<min_dif)
        {
            min_dif = abs(arr[i]-arr[i+1]);
        }
    }

    for(int i = 0; i<n;i++)
    {
        if(abs(arr[i]-arr[i+1])== min_dif)
        {
            ans.push_back(arr[i]);
            ans.push_back(arr[i+1]);
        }
    }
    return ans;

}


int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
        int val;
        cin>>val;
        arr[arr_i]=val;
    }
    vector <int> result = closestNumbers(arr,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

