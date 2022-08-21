#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector <uint64_t> arr) {
    // Complete this function
    uint64_t sum=0,min,max;
    vector <uint64_t> temp1;
    vector <uint64_t> temp2;
    temp1 = arr;
    temp2 = arr;
    while(!arr.empty())
    {
        sum += arr.back();
        arr.pop_back();
    }
    min = *min_element(temp1.begin(),temp1.end());
    max = *max_element(temp2.begin(),temp2.end());

    uint64_t max_sum = sum - min;
    uint64_t min_sum = sum - max;

    cout<<min_sum<<" "<<max_sum<<endl;
}

int main() {
    vector<uint64_t> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}

