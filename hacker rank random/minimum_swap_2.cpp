#include <bits/stdc++.h>

using namespace std;

void minSwap(vector <int> a) {
    int n = a.size();

    int count = 0;
    for(int i = 0; i < n; i++){
        while(a[i] != (i+1)){
            swap(a[i],a[a[i]-1]);
            count++;
        }
    }
    cout<<count<<endl;

}

int main() {
    int n;
    int t;
    t = 1;

    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    minSwap(a);

    return 0;
}

