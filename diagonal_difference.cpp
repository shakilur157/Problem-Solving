#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector < vector<int> > a) {
    // Complete this function
    int n = a.size();
    int i,j;
    vector <int> temp(n);
    int d1=0,d2=0,p=0,q=n-1;

    for(int a_i = 0;a_i < n;a_i++)
    {
        temp = a[a_i];
        d1 += temp.at(p);
        //d2 += temp.at(q);
        p++;

    }
    for(int a_i = 0;a_i < n;a_i++)
    {
        temp = a[a_i];
        d2 += temp.at(q);
        //d2 += temp.at(q);
        q--;;

    }
    int ans;
    ans = abs(d1-d2);
    return ans;



}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    //                      row         col
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}

