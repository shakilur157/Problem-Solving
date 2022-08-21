#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    float h ;
    h = (2 * area-1)/base+1;
    return h;
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}

