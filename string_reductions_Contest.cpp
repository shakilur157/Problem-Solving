#include <bits/stdc++.h>

using namespace std;

string stringReduction(string s) {
    // Complete this function
    int len = s.length();
    for(int i=0;i<len;i++)
    {
        for(int j =i+1;j<len;j++)
        {
            if(s[i]==s[j])
            {
                s.replace(j,1,"1");
            }

        }
    }
    string str="";
    for(int i = 0;i<len;i++)
    {
        if(s[i]!='1')
        {
            str=str+s[i];
        }
    }

    return str;
}

int main() {

    string s;
    cin >> s;
    string result = stringReduction(s);
    cout << result << endl;

    return 0;
}


