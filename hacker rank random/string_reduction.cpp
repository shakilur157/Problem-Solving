#include <bits/stdc++.h>

using namespace std;

int stringReduction(string s) {
    // Complete this function
    int a=0,b=0,c=0;
    for(int i =0;i<s.length();i++)
    {
        if(s[i]=='a')
            a++;
        else if(s[i]=='b')
            b++;
        else
            c++;
    }
    if(a==0 && b== 0 || b==0 && c==0 || c==0 && a==0)
        return s.length();
    else if(a%2==0 && b%2==0 &c%2==0 || a%2==1 && b%2==1 &c%2==1)
        return 2;
    else
        return 1;

    return s.length();
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        int result = stringReduction(s);
        cout << result << endl;
    }
    return 0;
}

