#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) {
    // Complete this function

    vector<int> temp = b;
    vector<int>temp2 = b;
    vector<int> temp3 =b;
    int s = temp2.size();
    int ar[s],p=0,count2 = 0;
    while(!temp2.empty())
    {
        ar[p] = temp2.back();
        temp2.pop_back();
        p++;
    }
    int b_first = temp[0];
    int b_min = *min_element(temp3.begin(),temp3.end());
    //cout<<b_min<<endl;
    int count = 0;
    //cout<<b_first<<endl;
    int a_last = a.back();
    int b_last = temp.back();
    a.pop_back();
    b.pop_back();
    if(a.size()<2)
    {
        for(int k =a_last; k<=b_min; k++)
        {
            count2=0;
            for(int kk = 0; kk<s; kk++)
            {
                if(ar[kk]%k==0)
                {
                    count2++;

                }
            }
            if(count2 == s)
            {
                count++;
            }

        }
    }
    else
    {
        for(int i = a_last; i <= b_first; i++ )
        {
            if((i%a_last==0) && (b_first%i==0))
            {
                count++;
            }

        }
    }
    return count;
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
