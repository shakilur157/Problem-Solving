#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    vector<int> temp;
    int arr[5] = {0,0,0,0,0};
    while(!ar.empty())
    {
        int val = ar.back();
        ar.pop_back();

        if(val == 1)
        {
            arr[0]++;
        }
        else if(val == 2)
        {
            arr[1]++;
        }
        else if(val == 3)
        {
            arr[2]++;
        }
        else if(val == 4)
        {
            arr[3]++;
        }
        else
        {
            arr[4]++;
        }

    }
    int max_val = arr[0];
    int index = 0;
    for(int i = 1; i <= 4; i++)
    {
        if(max_val<arr[i])
        {
            max_val = arr[i];
            index = i;
        }
    }

    return index+1;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}

