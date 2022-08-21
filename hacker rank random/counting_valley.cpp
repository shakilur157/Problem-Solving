#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,j,i=0,count = 0;
    cin>>n;
    char arr[n];

    for(j = 0; j < n; j++)
    {
        cin>>arr[j];
    }

    for(j = 0; j < n; j++)
    {
        if(arr[j] == 'U')
        {
            i++;
            if(i == 0)
                count++;
        }
        else if(arr[j] == 'D')
        {
            i--;
        }
    }

    cout<<count;

    return 0;
}
