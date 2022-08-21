#include <bits/stdc++.h>

using namespace std;


int checkSet(vector<int> check)
{
    int min_val = *min_element(check.begin(),check.end());
    int size = check.size();
    int count = 0;
    for(int i =0;i<size; i++)
    {
        //cout<<check[i]<<endl;
        if(abs(min_val-check[i])<=1)
        {
            count++;
        }
    }
    return count;
}
int pickingNumbers(int n,vector <int> a) {
    // Complete this function
    vector<int> temp = a;
    vector<int> ans;
    vector<int> check;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        //count = 0;
        check.clear();
        for(int j = 0; j < n; j++)
        {
            if(abs(temp[i]-a[j]) <= 1)
            {
                //count++;
                check.push_back(a[j]);
            }
        }
        count = checkSet(check);
        //cout<<temp[i]<<"--"<<count<<endl;
        ans.push_back(count);
    }
    return *max_element(ans.begin(),ans.end());

}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    int result = pickingNumbers(n,a);
    cout << result << endl;
    return 0;
}

