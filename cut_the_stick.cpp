#include <bits/stdc++.h>

using namespace std;

vector <int> cutTheSticks(vector <int> arr,int n) {
    // Complete this function

    vector<int> temp=arr;
    vector<int> ans;
    ans.push_back(n);
    int count=0;
    int small = *min_element(arr.begin(),arr.end());

    int size = temp.size();

    while(size>1)
    {
        arr = temp;
        temp.clear();
        while(!arr.empty())
        {
            int val = arr.back();
            arr.pop_back();

            val=val-small;
            if(val>0)
            {
                temp.push_back(val);
            }

        }
        //cout<<temp.size()<<endl;
        if(temp.size()>0)
            ans.push_back(temp.size());
        small = *min_element(temp.begin(),temp.end());

        size = temp.size();

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
    vector <int> result = cutTheSticks(arr,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}

