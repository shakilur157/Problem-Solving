#include <bits/stdc++.h>

using namespace std;

set <int> stones(int n, int a, int b) {
    // Complete this function
    int val=0;
    vector<int> v;
    vector<int> ans;
    set<int> s;
    //v.push_back(0);
    v.push_back(a);
    v.push_back(b);
    for(int i=0;i<n-2;i++)
    {
        while(!v.empty())
        {
            ans.push_back(v.back()+a);
            ans.push_back(v.back()+b);
            v.pop_back();
        }
        v=ans;
        if(i!=n-2)
            ans.clear();

    }
    while(!v.empty())
    {
        //cout<<v.back()<<" ";
        s.insert(v.back());
        v.pop_back();
    }
    return s;
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int n;
        cin >> n;
        int a;
        cin >> a;
        int b;
        cin >> b;
        set <int>::iterator it;
        set <int> result = stones(n, a, b);
        for ( it = result.begin(); it != result.end(); it++) {
            cout << *it<<" ";
        }
        cout << endl;


    }
    return 0;
}

