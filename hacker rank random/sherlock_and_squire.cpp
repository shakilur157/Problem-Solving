#include <bits/stdc++.h>

using namespace std;

int squares(int a, int b) {
    // Complete this function
    int s = sqrt(b);
    int count = 0;
    for(int i = 1;i<=s;i++)
    {
        int ans = i*i;
        if((ans>=a) && (ans<=b))
        {
            count++;
        }
    }
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int a;
        int b;
        cin >> a >> b;
        int result = squares(a, b);
        cout << result << endl;
    }
    return 0;
}
