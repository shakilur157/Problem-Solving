#include <bits/stdc++.h>

using namespace std;

int getMoneySpent(vector < int > keyboards, vector < int > drives, int s){
    // Complete this function

    vector <int> temp ;
    vector <int> t1 = keyboards;
    vector <int> t2 = drives;
    int k_size = t1.size();
    int d_size = t2.size();
    int k = 0;

    for(int i = 0; i < k_size; i++)
    {
        for(int j = 0; j< d_size; j++)
        {
            temp.push_back(keyboards[i]+drives[j]);
            //cout<< temp[k]
            k++;
        }
    }

    int hi = *min_element(temp.begin(),temp.end());
    for(int k = 0; k < d_size*k_size ; k++)
    {
        if((hi <= temp[k]) && (temp[k] <= s))
        {
            hi = temp[k];
        }
    }
    //cout<<hi<<endl;
    if(hi<=s)
        return hi;
    else
        return -1;


}

int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    vector<int> keyboards(n);
    for(int keyboards_i = 0; keyboards_i < n; keyboards_i++){
       cin >> keyboards[keyboards_i];
    }
    vector<int> drives(m);
    for(int drives_i = 0; drives_i < m; drives_i++){
       cin >> drives[drives_i];
    }
    //  The maximum amount of money she can spend on a keyboard and USB drive, or -1 if she can't purchase both items
    int moneySpent = getMoneySpent(keyboards, drives, s);
    cout << moneySpent << endl;
    return 0;
}

