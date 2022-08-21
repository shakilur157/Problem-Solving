#include <bits/stdc++.h>

using namespace std;

int beautifulPairs(vector <int> A, vector <int> B) {
    // Complete this function
    int count = 0;
    int n = A.size();
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int j=0,idx;
    for(int i=0;i<n;i++)
    {
        //cout<<A[i]<<"--"<<B[i]<<endl;
        while(A[i]>=B[j])
        {
            if(A[i]==B[j])
            {
                count++;
                B[j]=-1;
                idx=j;
                break;
            }
            j++;

        }

    }

    if(count==n)
        return n-1;
    else return count+1;

    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int A_i = 0; A_i < n; A_i++){
       cin >> A[A_i];
    }
    vector<int> B(n);
    for(int B_i = 0; B_i < n; B_i++){
       cin >> B[B_i];
    }
    int result = beautifulPairs(A, B);
    cout << result << endl;
    return 0;
}

