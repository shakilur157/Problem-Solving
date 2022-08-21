#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    vector <int> temp;
    temp = ar;
    int val,count = 0;
    int highest = *max_element(temp.begin(),temp.end());
    while(!ar.empty())
    {
        val = ar.back();
        ar.pop_back();
        if(val == highest)
            count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}
