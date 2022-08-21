#include <bits/stdc++.h>

using namespace std;

int reverse_function(int a)
{
    int res=0;
    while(a>0)
    {
        res = res + (a%10);
        res *= 10;
        a /=10;

    }
    return res/10;
}
int beautifulDays(int i, int j, int k) {
    // Complete this function
    int reverse_a,diff, count=0;
    for(int a = i; a <=j; a++)
    {
        reverse_a = reverse_function(a);
        diff = abs(reverse_a - a);
        if(diff==0)
            count++;
        //cout<<diff<<endl;
        for( int b = 2; b <= diff/2; b++)
        {
            if(diff%k==0)
            {

                count++;
                //cout<<diff<<" "<<b<<" "<<count<<endl;
                break;
            }
        }
        //cout<<reverse_a<<endl;
    }
    return count;
}

int main() {
    int i;
    int j;
    int k;
    cin >> i >> j >> k;
    int result = beautifulDays(i, j, k);
    cout << result << endl;
    return 0;
}
