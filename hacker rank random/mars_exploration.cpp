#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {
    // Complete this function
    int n = s.size();
    int count=0,count2=0;
    string str="SOS";
    int j = 0;
    for(int i = 0;i < n; i++)
    {
        if(s[i]!=str[j])
        {
            count++;
        }
        if(j==2)
        {
            j=0;
        }
        else
            j++;
    }

    return count;
}

int main() {
    string s;
    cin >> s;
    int result = marsExploration(s);
    cout << result << endl;
    return 0;
}

