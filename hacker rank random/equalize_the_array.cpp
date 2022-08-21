#include <bits/stdc++.h>

using namespace std;

int equalizeArray(vector <int> arr, int n) {
    // Complete this function
    int count = 0, max = 0;
    for(int i=0;i<n;i++)
    {
        count=0;

        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
        }
        if(count>max)
            max=count;
    }
    return n-max;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = equalizeArray(arr,n);
    cout << result << endl;
    return 0;
}
