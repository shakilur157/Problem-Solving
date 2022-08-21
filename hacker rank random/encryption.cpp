#include <bits/stdc++.h>

using namespace std;

string removeSpaces(string str)
{
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
    return str;
}
string encryption(string str) {
    // Complete this function
    int len = str.length();
    int l = ceil(sqrt(str.length()));
    string s="";
    vector<string> ans;
    int k;

    for(int i=0;i<l;i++)
    {
        k=i;
        while(k<len)
        {
            s=s+str[k];
            k+=l;

        }

        s = removeSpaces(s);
        ans.push_back((s));
        s="";

    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    string result = encryption(s);
    //cout << result << endl;
    return 0;
}
