#include <bits/stdc++.h>

using namespace std;

vector <int> jimOrders(vector < vector<int> > orders,int n) {
    // Complete this function

    vector<int> temp1,temp2;
    for(int i =0;i<n;i++)
    {
        temp1.push_back(orders[i][0]+orders[i][1]);
    }
    temp2 = temp1;

    sort(temp1.begin(),temp1.end());
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(temp1[i]==temp2[j])
            {
                ans.push_back(j+1);
                temp2[j]=-99;
                break;
            }
        }
    }
    return ans;

}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > orders(n,vector<int>(2));
    for(int orders_i = 0;orders_i < n;orders_i++){
       for(int orders_j = 0;orders_j < 2;orders_j++){
          cin >> orders[orders_i][orders_j];
       }
    }
    vector <int> result = jimOrders(orders,n);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}

