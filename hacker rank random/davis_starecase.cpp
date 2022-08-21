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
#define mx9   10000000007
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
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll lcm(ll a,ll b)
{
    return (a/gcd(a,b))*b;
}
////========== End of Templates ==============////
struct matrix
{
    ll n11,n12,n13,n21,n22,n23,n31,n32,n33;
    matrix()
    {
    }
    matrix(ll N11,ll N12,ll N13,ll N21,ll N22,ll N23,ll N31,ll N32,ll N33)
    {
        n11= N11;
        n12= N12;
        n13= N13;
        n21= N21;
        n22= N22;
        n23= N23;
        n31= N31;
        n32= N32;
        n33= N33;
    }
};
matrix mul(matrix A, matrix B)
{
    matrix ret(0,0,0,0,0,0,0,0,0);
    ret.n11 = ((A.n11*B.n11)%mx9 + (A.n12*B.n21)%mx9 + (A.n13*B.n31)%mx9)%mx9;
    ret.n12 = ((A.n11*B.n12)%mx9 + (A.n12*B.n22)%mx9 + (A.n13*B.n32)%mx9)%mx9;
    ret.n13 = ((A.n11*B.n13)%mx9 + (A.n12*B.n23)%mx9 + (A.n13*B.n33)%mx9)%mx9;

    ret.n21 = ((A.n21*B.n11)%mx9 + (A.n22*B.n21)%mx9 + (A.n23*B.n31)%mx9)%mx9;
    ret.n22 = ((A.n21*B.n12)%mx9 + (A.n22*B.n22)%mx9 + (A.n23*B.n32)%mx9)%mx9;
    ret.n23 = ((A.n21*B.n13)%mx9 + (A.n22*B.n23)%mx9 + (A.n23*B.n33)%mx9)%mx9;

    ret.n31 = ((A.n31*B.n11)%mx9 + (A.n32*B.n21)%mx9 + (A.n33*B.n31)%mx9)%mx9;
    ret.n32 = ((A.n31*B.n12)%mx9 + (A.n32*B.n22)%mx9 + (A.n33*B.n32)%mx9)%mx9;
    ret.n33 = ((A.n31*B.n13)%mx9 + (A.n32*B.n23)%mx9 + (A.n33*B.n33)%mx9)%mx9;

    return ret;
}
matrix poww(matrix m, ll p)
{
    //cout<<"\t"<<p<<endl;
    if(p==1)
    {
        return m;
    }
    if(p&1)
    {
        return mul(poww(m,p-1),m);
    }
    else
    {
        return mul(poww(m,p/2),poww(m,p/2));
    }
}
int main()
{
    ll t, n;
    matrix mat1(13,7,4,7,4,2,4,2,1);
    matrix mat2(1,1,0,1,0,1,1,0,0);
    matrix mat3(0,0,0,0,0,0,0,0,0);
    ll base[] = {0,1,2,4,7,13};
    cin>>t;
    ll res;
    while(t--)
    {
        cin>>n;
        if(n<6)
        {
            res = base[n];
        }
        else
        {
            mat3 = poww(mat2,n-5);
            mat3 = mul(mat1,mat3);
            res = mat3.n11;
        }
        res = res%mx9;
        if(res<0){
            res += mx9;
        }
        cout<<res<<endl;
    }
}
