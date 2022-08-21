#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str,str2;
    getline(cin,str);
    //cout<<str<<endl;

    int i = 0;

    while(str[i]!='\0')
    {
        int  a = str[i]+2;
        //cout<<char(a)<<endl;
        if(a>122)
        {
            cout<<char(a-123+97);


        }
        else if(a>97 && a<=122)
        {
            cout<<char(a);
            //str2 = str2 + str[i];
        }
        else
            cout<<str[i];

        i++;
    }
}
