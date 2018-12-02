#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n) {
    // Complete this function
    int sum=1;
    if(n==0)
        return 1;
    else
    {
        for(int i=1;i<=n;i++)
            if(i%2==0)
                sum=sum+1;
            else
                sum=sum*2;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << endl;
    }
    return 0;
}
