#include <bits/stdc++.h>

using namespace std;

using namespace std;

int m[10][10],t=2;

void region(int r,int c){

    m[r][c]=t;

    for(int i=r-1;i<=r+1;i++)
    {
        for(int j=c-1;j<=c+1;j++)
        {
            if( m[i][j]==1)
            {
                m[i][j]=t;
                region(i,j);

            }
        }
    }

    return;
}

int main() {
    int r,c;
    cin>>r>>c;

    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        cin>>m[i][j];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(m[i][j]==1)
            {
                region(i,j);
                t++;
            }
        }
    }
    int ar[t+1]={0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        ar[m[i][j]]+=1;
    }
    int max=0;
    for(int i=1;i<=t;i++)
        max=fmax(max,ar[i]);

    cout<<max;

    return 0;
}
