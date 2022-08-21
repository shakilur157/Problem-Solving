#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    int alice = 0,bob = 0;
    if(a0>b0)
        alice++;
    else if(a0==b0)
        ;
    else
        bob++;

    if(a1>b1)
        alice++;
    else if(a1==b1)
        ;
    else
        bob++;

    if(a2>b2)
        alice++;
    else if(a2==b2)
        ;
    else
        bob++;

    vector<int> v;
    v.push_back(alice);
    v.push_back(bob);
    return v;

}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

