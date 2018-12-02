
#include <bits/stdc++.h>

using namespace std;

long long int taumBday(long long int b, long long int w, long long int x, long long int y, long long int z) {
    // Complete this function
    if(z>abs(x-y))
    {
        return x*b+y*w;
    }
    else
    {
        long long int price1,price2;

        vector<long long int> v;
        v.push_back(b*x);
        v.push_back(w*y);
        v.push_back(b*(y+z));
        v.push_back(w*(x+z));

        if(v[0]>=v[2])
            price1 = v[2];
        else
            price1 = v[0];
        if(v[1]>=v[3])
            price2 = v[3];
        else
            price2 = v[1];
        //cout<<min1<<"-----"<<min2<<endl;

        return price1+price2;
        }

}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int b;
        long long int w;
        cin >> b >> w;
        long long int x;
        long long int y;
        long long int z;
        cin >> x >> y >> z;
        long long int result = taumBday(b, w, x, y, z);
        cout << result << endl;
    }
    return 0;
}

