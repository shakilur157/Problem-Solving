#include <bits/stdc++.h>

using namespace std;

long long digitSum(string s, int k)
{
    long long len = s.length();
    long long sum = 0;

    for(int i = 0 ; i <len; i++)
    {
        sum = sum+ s[i] -48;
    }
    sum = sum*k;

    return sum;
}

int main()
{
    string s;
    long long k;
    cin>>s;
    cin>>k;

    long long sum = digitSum(s,k);
    //cout<<sum<<endl;

    if(sum%9==0)
        cout<<"9"<<endl;
    else
        cout<<sum%9;
    return 0;

}
