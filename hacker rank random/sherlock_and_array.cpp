#include <bits/stdc++.h>

using namespace std;

string solve(vector < long long > a){
    // Complete this function
    long long n = a.size();
    long long sum_count1=0, sum_count2=0;
    long long sum_total = 0;

    if(n==1)
    {
        return "YES";
    }
    else
    {
        for(int i =0;i<n;i++)
        {
            sum_total +=a[i];
        }

        for(int i =0;i <n;i++)
        {
            sum_count1 +=a[i];
            if(sum_count1 == ((sum_total-sum_count1)-a[i+1]))
            {
                return "YES";
            }
        }
    }

    return "NO";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = solve(a);
        cout << result << endl;
    }
    return 0;
}

