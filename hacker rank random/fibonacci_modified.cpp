#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int128_t  fibonacciModified(int t1, int t2, int n) {
    // Complete this function

    int128_t  temp1 = t1,temp2 = t2, result=0;

    for(int i=0;i<n-2;i++)
    {
        result = temp1+ (temp2*temp2);
        temp1=temp2;
        temp2=result;
    }


    return result;
}

int main() {
    int t1;
    int t2;
    int n;
    cin >> t1 >> t2 >> n;
    int128_t  result = fibonacciModified(t1, t2, n);
    cout << result << endl;
    return 0;
}

