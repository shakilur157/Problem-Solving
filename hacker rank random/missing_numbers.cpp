
#include <bits/stdc++.h>

using namespace std;


vector <int> missingNumbers(vector <int> arr, vector <int> brr) {
    // Complete this function
    vector<int> temp = arr;
    vector<int> temp2= brr;
    vector<int> ans;

    while(!brr.empty())
    {
        bool found =false;
        int val = brr.back();
        int sa = temp.size();

        for(int i=0;i<sa;i++)
        {
            if(val==temp[i])
            {
                temp[i]=temp.back();
                temp.pop_back();
                found = true;
                break;
            }
        }
        if(!found)
            ans.push_back(val);
        brr.pop_back();
    }

    sort(ans.begin(), ans.end(), greater<int>());

    while(!ans.empty())
    {
        cout<<ans.back()<<" ";
        ans.pop_back();
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       arr[arr_i]=0;
    }

    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int m;
    cin >> m;
    vector<int> brr(m);

    for(int arr_i = 0; arr_i < m; arr_i++){
       brr[arr_i]=0;
    }

    for(int brr_i = 0; brr_i < m; brr_i++){
       cin >> brr[brr_i];
    }
    vector <int> result = missingNumbers(arr, brr);
    for (ssize_t i = 0; i < result.size(); i++) {
        //cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
