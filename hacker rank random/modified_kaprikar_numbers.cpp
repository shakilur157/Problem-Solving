#include <bits/stdc++.h>
#include <string>
using namespace std;

bool iskap(string str,long long int val)
{
    int s = str.size();
    string s1="";
    string s2="";
    long long int x;
    long long int x1;
    for(int i =0;i<s/2;i++)
    {
        s1=s1+str[i];
    }
    //cout<<s1;
    stringstream geek(s1);
    geek >> x;
    for(int i =s/2;i<s;i++)
    {
        s2=s2+str[i];
    }
    //cout<<"-"<<s2<<"--"<<val<<endl;
    stringstream geeks(s2);
    geeks >> x1;
    if(x+x1==val)
    {
        return true;
    }
    return false;

}

vector <long long int> kaprekarNumbers(int p, int q) {
    // Complete this function
    long long int sq;
    string str;
    vector<long long int> ans;
    for(long long int i=p;i<=q;i++)
    {
        sq=i*i;
        stringstream ss;
        ss << sq;
        string str = ss.str();
        //cout<<str<<endl;
        if(i==1)
            ans.push_back(1);
        if(iskap(str,i))
        {
            ans.push_back(i);
        }
    }
    return ans;

}

int main() {
    int p;
    cin >> p;
    int q;
    cin >> q;
    vector <long long int> result = kaprekarNumbers(p, q);
    if(result.size()>0)
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    else
        cout<<"INVALID RANGE";
    cout << endl;


    return 0;
}
