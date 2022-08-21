#include <bits/stdc++.h>

using namespace std;


void printarr(vector<int> v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void insertionSort1(int n, vector <int> arr) {
    // Complete this function
    int e = arr.back();
    int i =n-2;

    while((arr[i]>e) )
    {
        arr[i+1]=arr[i];
        i--;
        printarr(arr,n);
    }
    arr[i+1]=e;
    printarr(arr,n);

}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    insertionSort1(n, arr);
    return 0;
}
