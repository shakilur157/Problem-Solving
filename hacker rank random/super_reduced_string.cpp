#include <bits/stdc++.h>

using namespace std;

string super_reduced_string(string s){
    // Complete this function
    int len = s.size();
    string str="";
    while(str!=s)
    {
        str = s;
        for(int i = 0;i < len-1;i++)
        {
            if(s[i]==s[i+1])
            {
                s[i]=' ';
                s[i+1]= ' ';
            }
            s.erase(remove(s.begin(), s.end(), ' '), s.end());

        }
    }

    return s;
}

int main() {
    string s;
    cin >> s;
    string result = super_reduced_string(s);
    if(result.length()!=0)
        cout << result << endl;
    else
        cout<<"Empty String"<<endl;
    return 0;
}

