#include <bits/stdc++.h>

using namespace std;

int workbook(int n, int k, vector <int> arr) {
    // Complete this function
    int counter = 0, page = 0 ;
    for(int i=0;i<n;i++)
    {
        int val = arr[i];
        for(int j=1;j<=val;j=j+k)
        {
            page++;
            int offset = (val< j+(k-1))? val: j+(k-1);
            if(j<=page && page <=offset)
            {
                counter++;
                //cout<<page<<"--"<<counter<<endl;
            }
        }
    }

    return counter;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = workbook(n, k, arr);
    cout << result << endl;
    return 0;
}
