
#include <bits/stdc++.h>

using namespace std;

long long strangeCode(long long t) {
    // Complete this function
    long long sum=3,sum2=6;
    long long i;
    vector<long long> v,v2;
    v.push_back(1);
    v.push_back(4);
    v2.push_back(3);
    v2.push_back(9);
    long long ans,ans2;
    for(i=2;i<40;i++)
    {
        sum=sum*2;
        sum2=sum2*2;
        v.push_back(sum+v[i-1]);
        v2.push_back(sum2+v2[i-1]);
        //cout<<v2[i]<<" ";
    }
    i=0;
    long long ptr;
    while(1)
    {
        if(t>=v[i] && t<=v2[i])
        {
            ptr = i;
            break;
        }
        i++;
    }
    //cout<<ptr+1<<endl;
    long long  x= v[ptr];
    long long y= v[ptr]+2;
    while(x!=t)
    {
        x = x+1;
        y=y-1;
    }
    cout<<y<<endl;
    return 0;
}

int main() {

    long t;
    cin >> t;
    long result = strangeCode(t);
    //cout << result << endl;
    return 0;
}

