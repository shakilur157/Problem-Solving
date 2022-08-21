#include <bits/stdc++.h>

using namespace std;

vector <int> maximumPerimeterTriangle(vector <int> l,int n) {
    // Complete this function

    sort(l.begin(),l.end());

    vector<int>ans;
    for(int i=0;i<n-2;i++)
    {
        if(l[i]+l[i+1]>l[i+2])
        {
            ans.clear();
            ans.push_back(l[i]);
            ans.push_back(l[i+1]);
            ans.push_back(l[i+2]);
        }
    }
    if(ans.size()<3)
    {
        ans.push_back(-1);
    }
    else
        return ans;

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for(int l_i = 0; l_i < n; l_i++){
       cin >> l[l_i];
    }
    vector <int> result = maximumPerimeterTriangle(l,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

