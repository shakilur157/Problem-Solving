#include <bits/stdc++.h>

using namespace std;

void minOvertake(vector <int> a) {

    int n = a.size();
    int count = 0;
    bool flag = false;

    for(int i = 0; i < n; i++){
        int dif = a[i] - (i+1);
        if(a[i] - (i + 1) > 2 ){
            cout<<"Too chaotic"<<endl;
            flag = true;
            break;
        }
        for (int j = max(0, a[i] - 2); j < i; j++)
            if (a[j] > a[i]) count++;

    }
    if(!flag){
        cout<<count<<endl;
    }

}

int main() {
    int n;
    int t;
    cin >> t;

    while(t--){
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        minOvertake(a);
    }

    return 0;
}
