#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 1534236469;
    int x = 1534236469;
    long long ans = 0;

    if (num < 0){
            num = (num * -1);
    }
    while(num > 0){
        int temp = num % 10;
        ans = temp + (ans * 10);
        num = num / 10;
    }
    if(ans > INT_MAX || ans < -INT_MAX){
        cout<<"0"<<endl;
        return 0;
    }
    if(x > 0){
        cout<<ans<<endl;
        return 0;
    }else{
        cout<< (-1 * ans)<<endl;
        return 0;
    }
    cout<< ans << endl;
    return 0;
}
