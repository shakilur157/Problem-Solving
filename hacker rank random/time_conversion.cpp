#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

string timeConversion(string s) {
    // Complete this function
    string temp;
    string hr,ans_hr;
    hr = s[0];
    hr = hr + s[1];
    //cout<<hr;
    int h;
    h = atoi(hr.c_str());
    //cout<<h+1;
    if((h == 12) &&(s[8]=='P'))
    {
        ans_hr = "12";
        ans_hr[2] = '\0';
    }
    if((h != 12)&&(s[8]=='P'))
    {
        h = 12+h;
        stringstream ss;
        ss << h;
        ans_hr = ss.str();
        ans_hr[2] = '\0';
    }
    if((h != 12)&&(s[8]=='A'))
    {
        ans_hr = s[0];
        ans_hr+=s[1];
        ans_hr[2] = '\0';
    }
    if((h == 12)&&(s[8]=='A'))
    {
        ans_hr = "00";
        ans_hr[2] = '\0';
    }
    //cout<<ans_hr<<endl;
    for(int i=2;i<8;i++)
    {
        ans_hr+=s[i];
    }
    ans_hr[8]='\0';
    //cout<<ans_hr<<endl;
    return ans_hr;
}

int main() {
    string s;
    cin>>s;
    string result = timeConversion(s);
    cout << result << endl;
    return 0;
}
