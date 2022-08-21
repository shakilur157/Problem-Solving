#include <bits/stdc++.h>

using namespace std;

long long int  gridlandMetro(long long int  n, long long int  m, long long int  k, vector < vector<long long int > > track) {
    // Complete this function
    long long int  sum = 0;
    vector< vector<long long int > > arr(n,vector<long long int >(m));
    for(long long int  i = 0;i < n ;i++)
    {
       for(long long int  j = 0;j < m;j++)
       {
           arr[i][j]=2;
       }
    }

    for(long long int  i = 0;i<k;i++)
    {
       for(long long int  j = track[i][1]-1;j<=track[i][2]-1;j++)
       {
           arr[track[i][0]-1][j]=0;
           //sum++;
       }
    }
    for(long long int  i = 0;i < n;i++)
    {
       for(long long int  j = 0;j < m;j++)
       {
          if(arr[i][j]==0)
          {
              sum++;
          }
       }
    }

    return n*m-sum;
}

int main() {
    long long int  n;
    long long int  m;
    long long int  k;
    cin >> n >> m >> k;
    vector< vector<long long int > > track(k,vector<long long int >(3));
    for(long long int  track_i = 0;track_i < k;track_i++){
       for(long long int  track_j = 0;track_j < 3;track_j++){
          cin >> track[track_i][track_j];
       }
    }
    long long int result = gridlandMetro(n, m, k, track);
    cout << result << endl;
    return 0;
}

