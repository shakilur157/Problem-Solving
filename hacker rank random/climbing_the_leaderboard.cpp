#include <bits/stdc++.h>

using namespace std;

vector <long long> climbingLeaderboard(vector <long long> scores, vector <long long> alice) {
    // Complete this function
    vector<long long> vec = scores;
    vector<long long>::iterator it;
    it = unique (vec.begin(), vec.end());
    vec.resize(distance(vec.begin(),it));

    for(int i =0;i<alice.size();i++)
    {

        while(!vec.empty())
        {
            int val=vec.back();
            //vec.pop_back();
            if(val>alice[i])
            {
                cout<<vec.size()+1<<endl;
                break;
            }
            else
            {
                vec.pop_back();
            }

        }
        if(vec.size()==0)
            cout<<"1"<<endl;
    }



    return alice;
}

int main() {
    int n;
    cin >> n;
    vector<long long> scores(n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       cin >> scores[scores_i];
    }
    int m;
    cin >> m;
    vector<long long> alice(m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       cin >> alice[alice_i];
    }
    vector <long long> result = climbingLeaderboard(scores, alice);

    cout << endl;


    return 0;
}

