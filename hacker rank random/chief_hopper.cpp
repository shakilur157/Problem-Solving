#include <bits/stdc++.h>

using namespace std;

long long chiefHopper(vector <long long> arr,long long n) {
    // Complete this function
    bool go = true;
    long long count = 0, energy= arr[0]-1, total = 0;
    while(go)
    {
        for(int i = 0; i<n; i++)
        {
            total = total + (total-arr[i]);
            if(total<0)
                break;
            //cout<<total<<endl;

        }
        if(total>=0)
        {
            go = false;
            //return energy;
            //break;
        }
        else
        {
            energy++;
            total=energy;
        }

    }
    return energy;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    long long result = chiefHopper(arr,n);
    cout << result << endl;
    return 0;
}

