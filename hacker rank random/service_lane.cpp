#include <bits/stdc++.h>

using namespace std;
int checkLane(long entry, long exit, long arr[])
    {
        int countCar=0;
        for(int i=entry; i<=exit; i++)
            {
                if(arr[i]==1)
                {
                        return 1;
                }
                else if(arr[i]==2)
                {
                        countCar++;
                }

            }
        if(countCar>0)
        {
            return 2;
        }
        return 3;
    }

int main()
    {
        int testCases;
        long width, entry, exit;
        cin>>width >>testCases;
        long arr[width];

        for(int i=0; i<width; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<testCases; i++)
            {
                cin>>entry >>exit;
                cout<<checkLane(entry, exit, arr)<<endl;
            }
    }
