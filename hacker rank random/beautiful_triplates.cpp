#include <bits/stdc++.h>

using namespace std;

int beautifulTriplets(int d, vector <int> arr) {
    // Complete this function
    int dif1,dif2;
    int s = arr.size();
    int count = 0;

    for(int i = 0; i < s; i++ )
    {
        for(int j = i+1; j<s;j++)
        {
            for(int k = j+1;k<s;k++)
            {
                dif1 = arr[j]-arr[i];
                dif2 = arr[k]-arr[j];
                if(dif2>d)
                    break;
                if((dif1==d)&&(dif2==d))
                {
                    count++;
                    break;
                }
            }
        }
    }
    return count;
}

int main() {
    int n;
    int d;
    cin >> n >> d;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    int result = beautifulTriplets(d, arr);
    cout << result << endl;
    return 0;
}
