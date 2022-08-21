#include <bits/stdc++.h>

using namespace std;

vector <long long int> largestPermutation(long long k, vector <long long int> arr, long long n) {
    // Complete this function
    vector<long long int> temp = arr;
    sort(temp.begin(),temp.end());
    reverse(temp.begin(), temp.end());
    long long pointer = 0;

    if(k>n/2)
    {
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        return arr;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]!=n-i && k!=0)
            {
            j=i+1;
            while(arr[j]!=n-i)
                j++;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            k--;

            }
        }
    }


    return arr;
}

int main() {
    long long n;
    long long k;
    cin >> n >> k;
    vector<long long int> arr(n);
    for(long long arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    vector <long long int> result = largestPermutation(k, arr,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

