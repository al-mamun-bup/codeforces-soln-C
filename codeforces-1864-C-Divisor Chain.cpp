#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

/// Macros ///
#define ll long long
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define F first
#define S second
#define nl "\n"
#define pb push_back
#define pf push_front
#define db double
#define PI acos(-1.0)
#define all(v) v.begin(),v.end()
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())
#define inf LLONG_MAX
//#define bug(...) __f (#__VA_ARGS__, __VA_ARGS__)
// __builtin_popcount(x) is used to count the number of one’s(set bits) in an integer.
// __builtin_ctz(x)  
#define precision(x) cout.setf(ios::fixed); cout.precision(x);

inline ll nxt() {
    ll x;
    cin >> x;
    return x;
}

void solve() {
    ll n;
    cin>>n;
    vector<ll>v = {n};
    while(__builtin_popcount(n) > 1){
        int mask=__builtin_ctz(n);
        n-=(1<<mask);
        v.pb(n);
    }
    while(n>1){
        n>>=1;
        v.pb(n);
    }
    int k=v.size();
    cout<<k<<nl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<nl;
}

int main() {
    fast;
    ll tc = nxt();
    while (tc--) {
        solve();
    }
    return 0;
}
