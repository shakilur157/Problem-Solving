#include <bits/stdc++.h>

using namespace std;

int minimumDistances(vector <int> a,int n) {
    // Complete this function
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                v.push_back(abs(i-j));
        }
    }
    if(v.size()>0)
        return *min_element(v.begin(),v.end());
    else
        return -1;

}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = minimumDistances(a,n);
    cout << result << endl;
    return 0;
}
