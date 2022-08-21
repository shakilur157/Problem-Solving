#include<bits/stdc++.h>
#include<cstring>
#include <algorithm>
#include<iostream>
using namespace std;

vector<int> findArr(string str, char c){
    int len = str.size();
    int head = 0;
    vector<int> arr;
    for(int i=0;i<len;i++){
        if(str[i] == c){
            head = i;
            break;
        }
    }
    for(int i=0;i<len;i++){
        if(str[i] == c){
            head = i;
        }
        arr.push_back(abs(i - head));
    }
    return arr;
}
int main(){
    string str = "aaab";
    vector<int> arr1 = findArr(str, 'b');
    reverse(str.begin(), str.end());
    vector<int> arr2 = findArr(str, 'b');
    reverse(arr2.begin(), arr2.end());
    int len = str.size();
    vector<int> ans;
    for(int i = 0;i < len; i++){
        ans.push_back(min(arr1[i],arr2[i]));
    }
    for(int i=0;i<len;i++){
        cout<<ans[i]<<endl;
    }


    return 0;
}
