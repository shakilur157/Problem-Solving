
#include <bits/stdc++.h>

using namespace std;

int taumBday(int b, int w, int x, int y, int z) {
    // Complete this function
    int price;

    if (z >= abs(x-y))
    {
        price = b*x + w*y;
    }
    else if (x <= y)
    {
        price = b+w*x + w*z;
    }
    else
    {
    price = b+w*y + b*z;
    }
    return price;

}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int b;
        int w;
        cin >> b >> w;
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        int result = taumBday(b, w, x, y, z);
        cout << result << endl;
    }
    return 0;
}

