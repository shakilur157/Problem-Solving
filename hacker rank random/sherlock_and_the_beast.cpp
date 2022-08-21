#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;

        int val=n;
        while(val%3!=0)
        {
            val=val-5;
        }

        if(val<0)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<val;i++)
                cout<<"5";
            for(int j=0;j<n-val;j++)
                cout<<"3";
            cout<<endl;
        }
        }
        //cout<<endl;
    return 0;
}

