
#include <bits/stdc++.h>

using namespace std;

int findDigits(int n) {
    // Complete this function
    int a;
    int number = n, count = 0;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        //cout<<n<<"--"<<a<<endl;
        if(a==0)
        {
            ;
        }
        else if(number%a==0)
        {
            count++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int result = findDigits(n);
        cout << result << endl;
    }
    return 0;
}
