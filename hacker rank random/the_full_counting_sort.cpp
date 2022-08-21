#include <bits/stdc++.h>

using namespace std;


int main() {
    int n;
    cin >> n;
    int max_val=0;
    int min_val=9999999;
    string str[n];
    vector<int> arr(n);
    vector<int> arr_help;
    for(int arr_i = 0; arr_i < n; arr_i++){
        int val;
        string s;
        cin>>val;
        cin>>s;

        arr_help.push_back(val);
        if(arr_i<n/2)
        {
            str[arr_i]="-";
        }
        else
            str[arr_i]=s;

        arr[val]++;
        if(max_val<val)
        {
            max_val=val;
        }
        if(min_val>val)
        {
            min_val=val;
        }
    }
    vector<int>helper(n);
    helper=arr_help;
    /*for (ssize_t i = min_val; i <=max_val; i++) {
        while(arr[i]!=0)
        {
            helper.push_back(i);
            arr[i]--;
        }
    }*/
    sort(helper.begin(),helper.end());


    int count=0;

    int lim=n/2;
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(helper[i]==arr_help[j])
            {
                if(count<lim)
                {
                    cout<<str[j]<<" ";
                    arr_help[j]= -1;
                    count++;
                    break;
                }
                else
                {
                    cout<<str[j]<<" ";
                    str[j]=str[j];
                    arr_help[j]=-1;
                    count++;
                    break;
                }

            }
        }
    }

    return 0;
}


