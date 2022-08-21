#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s) {
    // Complete this function
    string str = "hackerrank";
    int n = s.size();
    int j = 0;

    for(int i = 0; i < n ;i++)
    {
        if(s[i]==str[j])
        {
            j++;
        }
    }
    if(j==str.size())
        return "YES";
    else
        return "NO";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = hackerrankInString(s);
        cout << result << endl;
    }
    return 0;
}

