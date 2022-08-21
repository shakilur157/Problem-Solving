#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(long n, long m, long s){
    // Complete this function
    long id;
    if((m+s-1)%n==0)
        return n;
    else
        return ((m+s-1)%n);
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        long m;
        long s;
        cin >> n >> m >> s;
        long result = saveThePrisoner(n, m, s);
        cout << result << endl;
    }
    return 0;
}

