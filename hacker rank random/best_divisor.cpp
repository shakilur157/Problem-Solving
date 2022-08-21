#include<bits/stdc++.h>

using namespace std;

int getDigitSum(int n){
    int sum=0;
    while(n>=1)
    {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int n, ans;

    cin>>n;
    int maxSum = 0;

    for(int i=1;i<=n; i++){
        if(n%i == 0){
            int sum = getDigitSum(i);
            if(maxSum<sum){
                maxSum = sum;
                ans = i;
            }

        }
    }
    cout<<ans<<endl;
    return 0;
}
