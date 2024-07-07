#include<bits/stdc++.h>
using namespace std;

//typedefs
typedef         long long           ll;
typedef         double              dl;
typedef         vector<int>         vin;
typedef         vector<ll>          vll;
typedef         pair<int, int>      pii;
typedef         pair<ll, ll>        pll;
typedef         vector<pll>         vpl;

// Macros
#define         FAST                  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define         fraction()            cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield)
#define         nl                    '\n'
#define         tc                    int t; cin>>t; while(t--)
#define         yes                   cout<<"YES"<<nl
#define         no                    cout<<"NO"<<nl
#define         case(x)               cout<<"Case "<<i<<": "<<x<<nl
#define         gcd(a,b)              __gcd(a,b)
#define         lcm(a,b)              1LL*a*b/gcd(a,b)
#define         F                     first
#define         S                     second
#define         MP                    make_pair
#define         pb                    push_back
#define         sz(x)                 (int)x.size()
#define         all(x)                x.begin(), x.end()
#define         rev(x)                reverse(all(x))
#define         allr(x)               x.rbegin(), x.rend()
#define         com                   greater<int>()
#define         unique(x)             (unique(x.begin(), x.end()) - x.begin())
#define         MAX(x)                *max_element(all(x))
#define         MIN(x)                *min_element(all(x))
#define         lower_bound(x,y)      lower_bound(all(x),y)-x.begin()
#define         upper_bound(x,y)      upper_bound(all(x),y)-x.begin()
#define         np(x)                 next_permutation(all(x))
#define         input(v)              for (auto& u : v) cin >> u
#define         output(v)             for (const auto& u : v) cout << u << " "
#define         SUM(x)                accumulate(all(x), 0LL)
#define         COUNT(x, value)       count(all(x), value)
#define         COUNT_CHAR(x, ch)     count(all(x), ch)
#define         TO_LOWER(x)           transform(all(x), x.begin(), ::tolower)
#define         TO_UPPER(x)           transform(all(x), x.begin(), ::toupper)
#define         mem(a,b)              memset(a, b, sizeof(a) )

//Debugger
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; srk(args); } while(0)
void srk(){cerr << endl;}
template<typename T>void srk(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void srk(T arg,const hello&...rest){cerr<<arg<<' ';srk(rest...);}

//Const
const           double          PI     =  acos(-1);
const           double          eps    =  1e-9;
const           ll              mod    =  1e7+7;
const           int             mx     =  1e4+123;



void solve() {
    
       
    
}

int main() {
    FAST
    tc{
      solve();
    }
    return 0;
}