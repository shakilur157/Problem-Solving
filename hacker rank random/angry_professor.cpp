#include <bits/stdc++.h>

using namespace std;

string angryProfessor(int n, int k, vector <int> a) {
    // Complete this function
    int count = 0;
    for(int i=0;i<n;i++)
    {
        int val = a[i];
        if(val<=0)
            count++;
    }
    if(count>=k)
        return "NO";
    else
        return "YES";
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = angryProfessor(n, k, a);
        cout << result << endl;
    }
    return 0;
}

