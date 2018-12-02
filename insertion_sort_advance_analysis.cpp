#include <bits/stdc++.h>

using namespace std;

int insertionSort(vector <int> arr,int n) {
    // Complete this function

    vector<int> vec = arr;
    int count = 0, count1 = 0;
    sort(vec.begin(),vec.end());

    for(int i = 0;i<n;i++)
    {
        if(arr[i]==vec[i])
        {
            count++;
        }
    }
    if(count==n)
        return 0;
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int k=i;
                while(arr[k]>arr[k+1] && k>=0)
                {
                    int temp = arr[k];
                    arr[k] = arr[k+1];
                    arr[k+1] = temp;
                    k--;
                    count1++;
                }
            }
        }
    }
    //for(int i = 0 ; i<n;i++)
        //cout<<arr[i]<<" ";
    return count1;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0; arr_i < n; arr_i++){
           cin >> arr[arr_i];
        }
        int result = insertionSort(arr,n);
        cout << result << endl;
    }
    return 0;
}
