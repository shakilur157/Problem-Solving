#include <bits/stdc++.h>
#include<string>

using namespace std;

int main() {


    set <char> myset;
    set<char>::iterator it;

    char s[1000];
    string str;
    cin.getline(s,sizeof(s));
    str = s;
    int i = 0;
    while(s[i]!='\0')
    {

	    if(str[i]>=65 && str[i]<=92)
	    {
		str[i]=str[i]+32;
	    }
        i++;
    }
    int n = i;
    for(int i = 0;i<n;i++)
    {
        //cout<<s[i]<<" ";
        myset.insert(str[i]);
    }

    if(myset.size()==27)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;

    return 0;
}

