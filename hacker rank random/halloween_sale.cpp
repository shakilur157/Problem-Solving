#include <bits/stdc++.h>

using namespace std;

int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy

    int total=0;
    int pd = p;
    int i=0;
    int count = 0;
    while(1)
    {
        total+=pd;
        if(total<=s)
        {
            count++;
            //cout<<total<<endl;
        }
        else
            break;
        if(pd-m<=d)
        {
            pd=m;
        }
        else
        {
            pd = p-d;
            p = p-d;
        }

    }
    return count;
}

int main() {
    int p;
    int d;
    int m;
    int s;
    cin >> p >> d >> m >> s;
    int answer = howManyGames(p, d, m, s);
    cout << answer << endl;
    return 0;
}
