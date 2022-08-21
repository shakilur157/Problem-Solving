
#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    // Complete this function
    int i=0, j =s.length()-1;
    int count;
    bool found = true;
    while(i<j)
    {
        int ival = s[i+1]-s[i];
        int jval = s[j]-s[j-1];
        //cout<<ival<<"--"<<jval<<endl;
        if(abs(ival) == abs(jval))
        {
            count++;
        }
        else
        {
            found = false;
        }
        i++;
        j--;
    }
    if(found)
        return "Funny";
    else
        return "Not Funny";
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}
