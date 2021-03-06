#include <bits/stdc++.h>
//#pragma GCC optimize ("Ofast,unroll-loops")

using namespace std;
#define ms(x,a) memset(x,a,sizeof x)
typedef long long ll;
typedef pair<int,int> pii;
const int mod=1e9+7,seed=131,MAXN=0;

int main(){
    cin.tie(0); cin.sync_with_stdio(0);
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> arr(n+1);
        for (int i=1;i<=n;++i){
            cin >> arr[i];
        }
        int tot=0;
        for (int i=1;i<=n;++i){
            for (int k=i+1;k<=n;++k){
                tot+=arr[i]>arr[k];
            }
        }
        cout << "Optimal train swapping takes " << tot << " swaps." << '\n';
    }
    
}