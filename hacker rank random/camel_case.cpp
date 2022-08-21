#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    // Complete this function
    int i = 0, count = 0;
    while(s[i]!='\0')
    {
        if(s[i]>=65 && s[i]<=90)
        {
            count++;
        }
        i++;
    }
    return count+1;
}

int main() {
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}

