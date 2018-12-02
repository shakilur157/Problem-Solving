#include <bits/stdc++.h>

using namespace std;

vector <int> leftRotation(vector <int> a, int d) {
    // Complete this function

    int n = a.size();
    int first=0;
    vector<int> ar(n);
    for(int i=0;i<n;i++)
    {
        ar[i]=a[(d+i)%n];
    }
    return ar;

}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector <int> result = leftRotation(a, d);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
