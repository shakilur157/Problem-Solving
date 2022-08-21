#include <bits/stdc++.h>

using namespace std;

int checkagain(string str)
{
    int len = str.size();
    int count = 0;
    int i = 0;
    bool found =true;
    while(str[i+2]!='\0')
    {
        if(str[i]==str[i+2])
        {
            count++;
        }
        else
        {
            found =false;
            break;
        }
        i++;
    }
    if(len-count==2 && found )
        return len;
    else return 0;
}
int check(int n,char *arr, string s)
{
    int len = s.size();
    vector<int> ans;

    for(int i = 0; i<len ;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string stt = s;
            for(int k=0; k < stt.size(); k++)
            {

                if(arr[i]==stt[k])
                    stt[k]=' ';
                else if(arr[j]==stt[k])
                    stt[k]=' ';
            }
            stt.erase(remove(stt.begin(), stt.end(), ' '), stt.end());
            cout<<stt<<endl;
            int count = checkagain(stt);
            ans.push_back(count);
            //cout<<count<<endl;
        }
    }
    return *max_element(ans.begin(),ans.end());
}
int twoCharaters(string s) {
    // Complete this function
    int i = 0;
    set<char> str;

    if(s.size()==1)
        return 0;
    else if(s.size()==2)
    {
        if(s[0]!=s[1])
            return 1;
        else
            return 0;
    }
    while(s[i]!='\0')
    {
        str.insert(s[i]);
        i++;
    }
    int n = str.size();
    char arr[n];
    set<char>::iterator it;
    i = 0;
    for(it = str.begin(); it != str.end(); it++)
    {
        arr[i]=*it;
        i++;
    }
    int aans=9999;
    if(n==1)
        return 0;
    else
        aans = check(n,arr,s);



    return aans;
}

int main() {
    int l;
    cin >> l;
    string s;
    cin >> s;
    int result = twoCharaters(s);
    cout << result << endl;
    return 0;
}
