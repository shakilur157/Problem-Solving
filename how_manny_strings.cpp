#include<bits/stdc++.h>

using namespace std;

string getsubsting(string s, int start, int end)
{
    string str="";
    for(int i=start;i<=end;i++)
    {
        str+=s[i];
    }
    return str;
}
void subString(string str, int n)
{
    set<string> ans;
    string sstr="";

    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            for (int k = i; k <= j; k++)
            {

                sstr+=str[k];
                ans.insert(sstr);
            }
            sstr="";
        }
    }
    /*set<string>::iterator it;
    for(it = ans.begin();it!=ans.end();it++)
    {
        cout<<*it<<endl;
    }*/
    cout<<ans.size()<<endl;
}

int main(){
    int n;
    int q;
    cin >> n >> q;
    string s;
    cin >> s;
    for(int a0 = 0; a0 < q; a0++){
        int left;
        int right;
        cin >> left >> right;
        // your code goes here
        string  str = getsubsting(s,left,right);
        //cout<<s<<"----";
        subString(str,(right-left+1));
    }
    return 0;
}
