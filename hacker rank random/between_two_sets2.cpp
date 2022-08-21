#include <bits/stdc++.h>

using namespace std;

int b_min;
int a_last;
vector<int> find_fac(vector<int>t)
{
    vector<int> temp3 = t;
    vector<int> ret;
    int size = temp3.size();
    int ar[size],i=0;
    while(!t.empty())
    {
        ar[i] = t.back();
        t.pop_back();
        i++;
    }
    for(int j = a_last; j<=b_min; j++)
    {
        int count = 0;
        for(int k = 0; k < size; k++)
        {
            if((ar[k]%j==0) || (j%ar[k]==0))
            {
                count++;
            }

        }
        if(count == size)
        {
            ret.push_back(j);
        }
    }
    return ret;
}
int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function

    vector<int> temp1 = b;
    vector<int> temp2 = a;
    vector<int> fac_a;
    vector<int> fac_b;
    int countt = 0;
    b_min = *min_element(temp1.begin(),temp1.end());
    a_last = temp2.back();
    temp2.pop_back();
    fac_a = find_fac(a);
    fac_b = find_fac(b);
    while(!fac_a.empty())
    {
        int val = fac_a.back();
        fac_a.pop_back();
        if(std::find(fac_b.begin(), fac_b.end(), val) != fac_b.end()) {
            countt++;
        }

    }
    return countt;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
