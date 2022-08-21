#include<bits/stdc++.h>

#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout);
#define reset(a,d) memset(a,d,sizeof(a))
#define eef else if
#define sf scanf
#define pf printf
#define i64 long long
#define ui64 unsigned long long
#define CASE(i) printf("Case %I64d: ", i);
#define nl puts ("")
#define ex exit(0)
#define ff first
#define ss second
#define pb(a,b) a.push_back(b)
#define pb2(a,i,b) a[i].push_back(b)
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define min4(a,b,c,d) min(min(a,b),min(c,d))
#define max4(a,b,c,d) max(max(a,b),max(c,d))
#define DIST(x1,x2, y1, y2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)))
#define DIST3D(x1,x2, y1, y2, z1, z2) (((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)) + ((z1-z2)*(z1-z2)))
#define CLR(a) a.clear()
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define FABS(x) ((x)+eps<0?-(x):(x))
#define ALL(x) (x).begin(),(x).end()
#define LLA(x) x.rbegin(), x.rend()
#define SORT(v) sort(ALL(v))
#define ODD(x) (((x)&1)==0?(0):(1))

////============ CONSTANT ===============////
#define MAXLL 9223372036854775807
#define MINLL -9223372036854775808
#define MAXL  2147483647
#define MINL  -2147483648
#define mx7   10000007
#define mx6   1000006
#define inf   1<<30                                           //infinity value
#define eps   1e-9
#define mxx    100010
#define mod   1000000007
#define PI acos(-1.0)
#define lft 2*root                                            // For Segment Tree
#define rgt lft+1

////======User Define Function==========////

using namespace std;
typedef long long ll;
ll bigmod(ll a,ll b,ll m)
{
    long long x=1,y=a;
    while(b>0)
    {
        if(b & 1)
            x=(x*y)%m;
        y=(y*y)%m;
        b>>=1;
    }
    return x;
}
ll gcd(ll a,ll b)
{
    ll rem=0;
    if(b==0)return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b))*b;
}
////========== End of Templates ==============////


ll dp[35];
ll getFibVal(ll n){
    if(dp[n] != -1){
        return dp[n];
    }
    if(n < 2)
        return n;

    return dp[n] = getFibVal(n-1)+getFibVal(n-2);
}
void init(){
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    dp[1] = 1;
}
int main(){

    ll n, fib, fib1, fib2;
    cin>>n;
    init();
    ll ans = getFibVal(n);
    cout<<ans<<endl;

}
