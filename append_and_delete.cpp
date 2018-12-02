#include <bits/stdc++.h>

using namespace std;

string appendAndDelete(string s, string t, int k) {
    // Complete this function

    int ans_size =0;
    if(s==t)
        return "Yes";
    else if(s.length()<t.length())
    {
        if (s == string(s.rbegin(), s.rend()) && t == string(t.rbegin(), t.rend()) && t.length()-s.length()<=k)
            return "Yes";
        else
            return "No";
    }
    else
    {
        int s_size = s.length();
        int t_size = t.length();
        int count = 0;

        for(int i = 0;i<s_size;i++)
        {
            if(s[i]==t[i])
            {
                count++;
            }
            else break;
        }
        ans_size = s_size-count + t_size-count;
    }
    if(ans_size<=k)
        return "Yes";
    else
        return "No";

}

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;
    int k;
    cin >> k;
    string result = appendAndDelete(s, t, k);
    cout << result << endl;
    return 0;
}
