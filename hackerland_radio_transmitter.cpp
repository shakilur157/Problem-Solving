#include <bits/stdc++.h>

using namespace std;

long int hackerlandRadioTransmitters(vector<long int> x, long int k) {
    // Complete this function
    long int count = 0;

    long int n = x.size();
    sort(x.begin(),x.end());
    int i = 0;
    while (i < n)
    {
        count++;
        int idx = x[i] + k;
        while(i < n && x[i] <= idx)
            i++;

        idx = x[--i] + k;

        while (i < n && x[i] <= idx)
            i++;
    }
    return count;
}

int main() {
    long int n;
    long int k;
    cin >> n >> k;
    vector <long int> x(n);
    //x={0};

    for(int x_i = 0; x_i < n; x_i++){
        cin>>x[x_i];
    }
    long int result = hackerlandRadioTransmitters(x, k);
    cout << result << endl;
    return 0;
}

