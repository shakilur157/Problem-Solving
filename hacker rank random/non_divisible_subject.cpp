#include <bits/stdc++.h>

using namespace std;
int main() {
    long n,k,temp;
    cin>>n>>k;
    int kval[101];
    vector<int> arr(n);
 for (int i = 0 ; i < k ; i++)
 {
     arr[i] = 0 ;
 }
 int vul;
 for (int i = 0 ; i < n ; i++)
 {
     cin>>temp;
     arr[temp%k]+=1;
 }
int i=1,j=k-1,count = n;
if(k==1)
{
    count=1;
}
else if(k==2)
{
    if((arr[i]>arr[j]) && (arr[j]>0))
     {
         count-=arr[j];
         //cout<<"1-";
     }
     else if((arr[i]<arr[j]) && (arr[i]>0))
     {
         count-=arr[i];
         //cout<<"2-";
     }
}
else
{
    while(i<j)
     {
         //cout<<i<<"---"<<j<<endl;
         //cout<<arr[i]<<"---"<<arr[j]<<endl;
         if((arr[i]>arr[j]) && (arr[j]>0))
         {
             count-=arr[j];
             //cout<<"1-";
         }
         else if((arr[i]<arr[j]) && (arr[i]>0))
         {
             count-=arr[i];
             //cout<<"2-";
         }
         i++;
         j--;
     }
}



cout<<count;
return 0;
}
/*6 9
422346306 940894801 696810740 862741861 85835055 313720373

5 5
2 7 12 17 22
*/
