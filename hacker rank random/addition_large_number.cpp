#include <bits/stdc++.h>
#include<string>
using namespace std;

int bigmod(int a, int b , int M) {
    // Complete this function
    if(b==0)
        return 1%M;
    int x = bigmod(a,b/2,M);
    x = (x*x) % M;
    if(b%2==1)
        x = (x*a) % M;
    return x;
}

int main() {

    int ans = bigmod(2,127,10);
    cout<<ans<<endl;
    //cout<<32%7<<endl;
}


