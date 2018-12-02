#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,m;

cin>>n>>m;

string s[]={"o' clock","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen", "fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two", "twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight", "twenty nine"};

string s1[]={"past","quarter","to","minutes","half","minute"};
if(m<=15) {

   if(m<15)
    {

        if(m==0)
            cout<<s[n]<<" "<<s[0];
        else if(m<10)
            cout<<s[m]<<" "<<s1[5]<<" "<<s1[0]<<" "<<s[n];
        else if(m<16)
            cout<<s[m]<<" "<<s1[3]<<" "<<s1[0]<<" "<<s[n];
    }
    else
    {
     cout<<s1[1]<<" "<<s1[0]<<" "<<s[n];
    }
}
else if(m<=30)
{
    if(m<30)
    {
        cout<<s[m]<<" "<<s1[3]<<" "<<s1[0]<<" "<<s[n];
    }
    else
    {
        cout<<s1[4]<<" "<<s1[0]<<" "<<s[n];
    }
}
else if(m<=45)
{
    if(m<45)
    {
        cout<<s[60-m]<<" "<<s1[3]<<" "<<s1[2]<<" "<<s[n+1];
    }
    else
    {
        cout<<s1[1]<<" "<<s1[2]<<" "<<s[n+1];
    }
}
else if(m<=59)
{
    cout<<s[60-m]<<" "<<s1[3]<<" "<<s1[2]<<" "<<s[n+1];
}
return 0;
}
