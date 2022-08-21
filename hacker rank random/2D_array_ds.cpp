#include <bits/stdc++.h>

using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int sum = 0;
    vector<int> ans;
    for(int i = 0;i < 6-2;i++)
    {

        for(int j=0;j< 6-2;j++)
        {
            sum = 0;
            sum= sum + arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            //cout<<sum<<endl;
            ans.push_back(sum);
        }

    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;;
    return 0;
}

