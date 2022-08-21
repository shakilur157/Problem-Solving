#include <bits/stdc++.h>

using namespace std;

vector <int> permutationEquation(int n,vector <int> p) {
    // Complete this function
    vector <int> temp ;

    int ar[n+1];
    ar[0]=0;
    for(int i = 1; i <=n; i++)
    {
        ar[p[i-1]]= i;
    }

    for(int i=1;i<=n;i++)
        cout<<ar[ar[i]]<<endl;

    return temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for(int p_i = 0; p_i < n; p_i++){
       cin >> p[p_i];
    }
    vector <int> result = permutationEquation(n,p);
    for(int i = 0; i<n;i++)
    {
        //cout<<result[i]<<endl;
    }
    cout << endl;


    return 0;
}
