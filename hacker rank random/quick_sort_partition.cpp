#include <bits/stdc++.h>

using namespace std;

vector <int> quickSort(vector <int> arr,int n) {
    // Complete this function
    int pivot = arr[0];
    vector<int> left,right,equal;

    for(int i=1;i<n;i++)
    {
        if(arr[i]<pivot)
        {
            left.push_back(arr[i]);
        }
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]>pivot)
        {
            right.push_back(arr[i]);
        }
    }
    equal.push_back(pivot);
    for(int i=1;i<n;i++)
    {
        if(arr[i]==pivot)
        {
            equal.push_back(arr[i]);
        }
    }
    vector<int> ans;
    for(int i = 0;i<left.size();i++)
    {
        ans.push_back(left[i]);
    }
    for(int i = 0;i<equal.size();i++)
    {
        ans.push_back(equal[i]);
    }
    for(int i = 0;i<right.size();i++)
    {
        ans.push_back(right[i]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <int> result = quickSort(arr,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

