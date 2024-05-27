//Problem Web:
// all vscode snippets: https://github.com/yyhaos/vscode_snippets
#include<bits/stdc++.h>
#include<ext/rope>
using namespace std;
#ifdef yyhao
const std::string currentDateTime() {
    time_t	 now = time(0);
    struct tm  tstruct;
    char	   buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}
#endif
#define ll long long
#define lowbit(x) (x&-x)
#define rep(i,x,y) for(ll i=x;i<=y;i++)
#define crep(i,x,y) for(ll i=x;i>=y;i--)
#define gcd(x,y) __gcd(x,y)
#define mem(x,y) memset(x,y,sizeof(x))
#define vc vector
//#define use_t 1
const double PI=acos(-1.0);
const double eps=1e-8;
const ll INF = 100000000;
const ll maxn=1000;
const ll q=1e9+7;
ll ksm(ll a,ll b)
{
    ll ans=1LL;
    while(b>0)
    {
        if(b&1LL)
            ans=ans*a%q;
        a=a*a%q;
        b/=2LL;
    }
    return ans;
}
struct S {
    ll a, b;
    bool operator<(const S& other) const {
        if(a == other.a) {
            return b > other.b;// 注意这里使用 '>' 是为了实现最小堆，即 b 较小的在前
        }
        return a > other.a;  // 注意这里使用 '>' 是为了实现最小堆，即 a 较小的在前
    }
};
priority_queue<S> pq;
ll t,n,m,k;


const ll N = ;
ll c[N];
int main ()
{
#ifdef yyhao
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    cout<<"Time:"<<currentDateTime()<<endl;
#endif

#define use_t
#ifdef use_t
int ii=1;
cin>>t;
for(ii=1;ii<=t;ii++)
{ 
#endif // use_t
    cin>>n;
    rep(i,1,n)
    {
        cin>>c[i];
    }
#ifdef use_t
}
#endif // use_t
    return 0;
}