#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector <int> arr) {
    // Complete this function
    int el,neg=0,pos=0,equ=0,sizee;
    float ans1,ans2,ans3;
    vector<int> temp;
    temp = arr;
    while(!arr.empty())
    {
        el = arr.back();
        arr.pop_back();
        if(el>0)
            pos++;
        else if(el==0)
            equ++;
        else
            neg++;
    }
    sizee = temp.size();
    //cout<<sizee<<endl;
    if(pos>0)
        ans1 = float(pos)/float(sizee);
    else
        ans1 = 0;
    printf("%.6f\n", ans1);

    if(neg>0)
        ans2 = float(neg)/float(sizee);
    else
        ans2 = 0;
    printf("%.6f\n", ans2);
    if(equ>0)
        ans3 = float(equ)/float(sizee);
    else
        ans3 = 0;
    printf("%.6f\n", ans3);

}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}
