#include <bits/stdc++.h>

using namespace std;

int luckBalance(int n, int k, vector < vector<int> > contests) {
    // Complete this function
    vector<int> myvect;
    int sum=0,sum1=0;
    int count = 0;
    for(int i = 0;i<n;i++)
    {

        if(contests[i][1]==1)
        {
            myvect.push_back(contests[i][0]);
            sum+=contests[i][0];
        }
        else
            sum1=sum1+contests[i][0];

    }
    //cout<<"---"<<sum<<endl;
    sort(myvect.begin(),myvect.end());

    if(k<=myvect.size())
    {
        for(int i = 0;i<myvect.size()-k;i++)
        {
            sum= sum-(2*myvect[i]);
        }
    }
    return sum+sum1;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector< vector<int> > contests(n,vector<int>(2));
    for(int contests_i = 0;contests_i < n;contests_i++){
       for(int contests_j = 0;contests_j < 2;contests_j++){
          cin >> contests[contests_i][contests_j];
       }
    }
    int result = luckBalance(n, k, contests);
    cout << result << endl;
    return 0;
}

