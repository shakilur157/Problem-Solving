#include <bits/stdc++.h>

using namespace std;

int beautifulBinaryString(string s) {
    // Complete this function
    int len = s.length();
    int count = 0;
    for(int i = 0;i<len-2;i++)
    {

        if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0' )
        {
            s[i+1]='0';
            i=i+2;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;

}

int main() {
    int n;
    cin >> n;
    string b;
    cin >> b;
    int result = beautifulBinaryString(b);
    //cout << result << endl;
    return 0;
}
