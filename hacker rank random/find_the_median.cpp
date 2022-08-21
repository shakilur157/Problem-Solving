#include <bits/stdc++.h>

using namespace std;

int main() {

    int n = 5;

    int arr[10] ={0};
    for(int arr_i = 0; arr_i < n; arr_i++){
        int val;
        cin>>val;
        arr[val]++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

