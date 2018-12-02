#include <bits/stdc++.h>

using namespace std;

int gregor(int year)
{
    if((year%4==0&&year%100!=0)||(year%100==0&&year%400==0))
    {
        printf("12.09.%d",year);
    }
    else
        printf("13.09.%d",year);

    return 0;
}
int julean(int year)
{
    if(year%4==0)
    {
        printf("12.09.%d",year);
    }
    else
        printf("13.09.%d",year);
    return 0;
}

int main()
{
    int year;
    scanf("%d",&year);
    if((year>=1700)&&(year<=1917))
    {
        julean(year);
    }
    else if((year>=1919)&&(year<=2700))
    {
       gregor(year);
    }
    else
    {
       printf("26.09.%d",year) ;

    }
}
