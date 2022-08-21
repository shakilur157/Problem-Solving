#include <bits/stdc++.h>

using namespace std;
int *shift(int *arr, int n)
{
    int temp[n];
    //cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        arr[i+1]=temp[i];
    }
    arr[0]= temp[n-1];
    return arr;
}

vector <int> circularArrayRotation(vector <int> a, vector <int> m, int n, int q,int k) {
    // Complete this function
    int arr[n];
    for(int i =0; i<n;i++)
    {
        arr[i]= a[i];
    }
    for(int i = 0; i < k; i++)
    {
        shift(arr,n);
    }

    vector<int> ans;
    for(int i =0;i<q;i++)
    {
        int val = m[i];
        ans.push_back(arr[val]);

    }
    return ans;

}

int main() {
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> m(q);
    for(int m_i = 0; m_i < q; m_i++){
       cin >> m[m_i];
    }
    vector <int> result = circularArrayRotation(a, m,n,q,k);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }
    cout << endl;


    return 0;
}
