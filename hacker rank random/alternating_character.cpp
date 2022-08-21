#include <bits/stdc++.h>

using namespace std;

int alternatingCharacters(string s){
    // Complete this function
    int len = s.length();
    int count = 0;

    for(int i = 0; i < len-1; i++)
    {
        if(s[i]==s[i+1])
        {
            //s[i]=' ';
            //s.erase(remove(s.begin(), s.end(), ' '), s.end());
            count++;
            //i=0;
        }
    }
    cout<<count<<endl;
    return 0;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = alternatingCharacters(s);
        //cout << result << endl;
    }
    return 0;
}
