#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    unsigned long long int n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<(n%1000000007)*(n%1000000007)%1000000007<<endl;
    }
}
