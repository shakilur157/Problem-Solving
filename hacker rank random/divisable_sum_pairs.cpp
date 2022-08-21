#include <bits/stdc++.h>

using namespace std;
vector <int> b;
vector <int> w;
int best = 0 , worst = 0;

 void breakingRecords(vector <int> score) {

    for(int i =0 ; i<score.size();i++)
        cout<<score[i]<<endl;

   // b.push_back(score[0]);
   // w.push_back(score[0]);



}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
   /* vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0; */
}
