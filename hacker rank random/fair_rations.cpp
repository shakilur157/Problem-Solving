#include <bits/stdc++.h>

using namespace std;

int fairRations(vector <int> B,int N) {
    // Complete this function
    int count=0;
    int i;
    for(i = 0;i<N-1;i++)
    {
        if(B[i]%2==1)
        {
            B[i]+=1;
            B[i+1]+=1;
            count++;
            i=0;
        }
    }
    int c =0;
    for(i=0;i<N;i++)
    {
        if(B[i]%2==0)
            c++;
    }
    if(c==N)
    {
        cout<<count*2<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}

int main() {
    int N;
    cin >> N;
    vector<int> B(N);
    for(int B_i = 0; B_i < N; B_i++){
       cin >> B[B_i];
    }
    int result = fairRations(B,N);

    return 0;
}

