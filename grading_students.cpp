#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function

    vector <int> temp;
    int i =0, val;
    while(!grades.empty())
    {
        val = grades.back();
        grades.pop_back();
        if((val>=38) && (val<=100))
        {
            //cout<<val<<"val if"<<endl;
            if(5 - (val%5) < 3)
            {
                val = val + (5-(val%5));
                temp.push_back(val);
            }
            else
            {
                temp.push_back(val);
            }

        }
        else
        {
            //cout<<val<<"val else"<<endl;
            val = val;
            temp.push_back(val);
        }


        i++;


    }
    return temp;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    while(!result.empty()) {
        //cout << result[i] << (i != result.size() - 1 ? "\n" : "");
        cout<<result.back()<<endl;
        result.pop_back();
    }
    cout << endl;


    return 0;
}

