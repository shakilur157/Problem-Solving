#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {3,2,4};
    int target = 6;

    vector<int> ans;
    for(int i=0;i<3;i++){
        for(int j = i+1; j<3; j++){
            if(arr[i] + arr[j] == target){
                cout<<i<<":"<<j<<endl;
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
    }
    return 0;
}
