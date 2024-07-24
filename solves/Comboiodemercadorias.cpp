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
    date: 30/12/2023
    link: https://neps.academy/br/exercise/2333
*/



void solve(){

    ll N,W,D,resp = 0,wAtul = 0, caAtul = 0, x;

    cin >> N >> W >> D;

    repn(i, N){
        cin >> x;

        if(D >= i*2){
            wAtul++;
            caAtul += x;
            if(wAtul == W){
                D -= i*2;
                resp  += caAtul;
                wAtul = 0;
                caAtul = 0;
            }
        }else{
            resp +=caAtul;
            break;
        }
    }

    cout << resp << endl;

}




int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;// cin >> t;
    while(t--) solve();
    
    return 0;
}