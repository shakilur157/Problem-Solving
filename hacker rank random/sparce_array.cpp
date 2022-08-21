#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string str[n];
    for(int i =0;i<n;i++)
    {
        cin>>str[i];
    }
    int q;
    cin>>q;
    string str2[q];
    for(int i =0;i<q;i++)
    {
        cin>>str2[i];
    }
    for(int i = 0;i<q;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(str2[i]==str[j])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}


