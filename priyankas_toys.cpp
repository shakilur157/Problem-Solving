#include <bits/stdc++.h>

using namespace std;

int toys(vector <int> w,int n) {
    // Complete this function
    int count = 0;
    vector<int> ans;
    sort(w.begin(), w.end());
    for(int i = 0; i < n; i = upper_bound(w.begin(), w.end(), w[i]+4) - w.begin())
    {
        count++;
    }
    /*while(!ans.empty())
    {
        cout<<ans.back()<<" ";
        ans.pop_back();
    }*/
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> w(n);
    for(int w_i = 0; w_i < n; w_i++){
       cin >> w[w_i];
    }
    int result = toys(w,n);
    cout << result << endl;
    return 0;
}

