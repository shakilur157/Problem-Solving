#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) {
    vector <int> temp = score;
    vector <int> temp1 = score;
    temp1.erase(temp1.begin());
    vector <int> temp2 = score;
    temp2.erase(temp2.begin());
    int max_val = temp[0];
    //cout<<max_val<<endl;
    int min_val = max_val;
    int count1=0,count2=0;

    for(int i = 0; i < temp1.size(); i++)
    {
        int val = temp1[i];
        //temp1.pop_back();
        if(max_val<val)
        {
            count1++;
            max_val = val;
            //cout<<max_val<<"-ma"<<endl;
        }
    }
    for(int j = 0; j < temp1.size(); j++)
    {
        int val = temp2[j];
        //temp2.pop_back();
        if(min_val>val)
        {
            count2++;
            min_val = val;
            //cout<<max_val<<"-mi"<<endl;
        }
    }
    vector <int> ans;
    ans.push_back(count1);
    ans.push_back(count2);
    return ans;

}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
