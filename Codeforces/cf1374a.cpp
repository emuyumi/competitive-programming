#include <bits/stdc++.h>
//#pragma GCC optimize ("Ofast")

using namespace std;
#define ms(x,a) memset(x,a,sizeof x)
typedef long long ll;
typedef pair<int,int> pii;
const int mod=1e9+7,seed=131,MAXN=0;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        int x,y,n; cin >> x >> y >> n;
        ll ans=(x*(n/x)+y);
        if (ans>n) ans-=x;
        cout << ans << '\n';
    }
}