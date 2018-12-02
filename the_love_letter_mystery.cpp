#include <bits/stdc++.h>

using namespace std;

int theLoveLetterMystery(string s){
    // Complete this function
    int len = s.length()-1;
    int ans=0;
    int i=0,j=len;
    while(i<=j)
    {
        ans+=abs(s[i]-s[j]);
        i++;
        j--;
    }
    cout<<ans<<endl;
    return 0;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = theLoveLetterMystery(s);
        //cout << result << endl;
    }
    return 0;
}

