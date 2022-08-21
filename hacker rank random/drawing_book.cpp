#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    int count1 = 0, count2 = 0;

    if((p==1) || (p==n))
        return 0;

    else
    {
        for(int i = 2; i <= n; i=i+2)
        {
            count1++;
            if((i == p) || (i+1 == p))
            {
                break;
            }

        }
        //cout<<count1<<endl;
        if((n%2==0) && (n+1 !=p))
        {
            n=n-1;
            count2++;
        }

        for(int i = n; i >= 1; i=i-2)
        {
            if((i == p) || (i-1==p))
            {
                break;
            }
            count2++;
        }

        //cout<<count2<<endl;
    }
    return min(count1,count2);
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
