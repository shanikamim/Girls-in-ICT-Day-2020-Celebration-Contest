#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
typedef pair<ll,ll> Pair;
ll cnt=0,  cnt1=0;
std::vector<ll> a,b,c;
map<Pair,ll>lol;
ll gcd(ll a, ll b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{

    FAST_IO();
    ////////////////////////
    ll n;
    cin>>n;
    for(int i=0; i<n ; i++){
        ll temp;
        cin>>temp;
        a.pb(temp);
    }
    for(int i=0; i<n ; i++){
        ll temp;
        cin>>temp;
        b.pb(temp);
    }
    for(int i=0; i<n ; i++){
        if(a[i]==0){
            if(b[i]==0)
                cnt++;
        }
        else{
            if(a[i]<0){
                a[i]*=-1;
                b[i]*=-1;
            }
            else if(a[i]==0 &&b[i]<0)
                b[i]*=-1;
            ll temp=gcd(abs(a[i]),abs(b[i]));
            ll x=a[i]/temp;
            ll y=(b[i]/temp);
            // cout<<-y<<" "<<x<<endl;
            lol[make_pair(y,x)]++;
            cnt1=max(cnt1,lol[make_pair(y,x)]);
        }

    }
    cnt+=cnt1;
    cout<<cnt<<endl;
    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
