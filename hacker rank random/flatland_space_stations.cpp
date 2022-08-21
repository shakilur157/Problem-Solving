#include<bits/stdc++.h>
using namespace std;


int main() {
    long int n,m,i,d=0,j;
    cin>>n>>m;
    int ar[m];

    for(i=0;i<m;i++)
         cin>>ar[i];

    long max;

    for(i=0;i<n;i++)
    {
         max=n+1;
         for(j=0;j<m;j++)
         {
             if(abs(ar[j]-i)<max)
             {
                 max=abs(ar[j]-i);
             }
         }
         if(max>d)
         {
             d=max;
         }
     }
     cout<<d;
     return 0;
}
