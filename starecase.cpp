#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    // Complete this function
    for(int i = 0; i < n; i++)
    {
        for(int j = n-1; j >i; j--)
        {
            cout<<" ";
        }
        for(int k = 0; k <= i; k++)
        {
            cout<<"#";
        }
        cout<<endl;

    }
}

int main() {
    int n;
    cin >> n;
    staircase(n);
    return 0;
}
