#include<bits/stdc++.h>


using namespace std;

int main(){
    int t,n, ans;

    cin>>t;
    while(t--){
        cin>>n;
        ans = (n*(n-1))/2;
        cout<<ans<<endl;
    }

    return 0;
}
