#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    int ary[n];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        ary[i] = ar[i];
    }
    int item,ind = n;
    for(int i = 0; i < n; i++)
    {
        item = ary[0];
        ind--;
        for(int j = 0; j < ind; j++)
        {
            ary[j] = ary[j+1];
        }
        for(int k = 0; k < ind; k++)
        {
            if(item == ary[k])
            {
                count++;
                //cout<<count<<"  "<<item<<"-i"<<endl;
                for(int p = k; p < ind ; p++)
                {
                    ary[p]= ary[p+1];
                }
                ind--;
                break;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}

