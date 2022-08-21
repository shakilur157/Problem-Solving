#include <bits/stdc++.h>

using namespace std;

int chocolateFeast(int n, int c, int m) {
    // Complete this function
    int number = n/c;
    int count = number;

    while(number>=m)
    {
        count++;
        number = number-m+1;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        int result = chocolateFeast(n, c, m);
        cout << result << endl;
    }
    return 0;
}
