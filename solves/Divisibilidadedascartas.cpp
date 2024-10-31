#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define pu push
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define eps 1e-8
#define fi first
#define sc second
#define rep(i,x) for(int i=0;i<x;i++)
#define repn(i,x) for(int i=1;i<=x;i++)
#define repi(i,x) for(auto i : x)
#define repi2(k,v,x) for(auto &[k, v] : x)
#define SORT(x) sort(x.begin(),x.end())
#define INF_INT 0x3f3f3f3f
#define endl '\n'

const int MAXN = 2e5+2;

/*
    by: marcos andrade
    date: 20/08/24
    link: https://neps.academy/br/exercise/2340
*/



void solve(){

    ll l,r;


    cin >> l >> r;
    
    
    ll suml = ((l%9*(l%9 + 1))/2) % 9;
    ll sumr = ((r%9*(r%9 + 1))/2) % 9;


    if(l + 8 < r){
        cout <<   ((36 - suml + l%9)%9 + sumr)%9  ;  
    }else{
        if(l%9 > r%9){
            cout << ((36 - suml +  l%9)%9+sumr)% 9;
        }else{
            cout << (abs(sumr - suml))%9 << endl;
        }
        
    }
    //cout << suml << endl;




}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}