#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
int main(){
    fast_io
    int n; cin >> n;
    int a[100001], dp[100001];

    for(int i = 0; i < n; i++) cin >> a[i];

    int sol = INT_MIN;
    for(int i = 0; i < n; ++i){
        dp[i] = max(a[i], dp[i-1] + a[i]);
        sol = max(sol, dp[i]);
    }

    cout << sol;

    return 0;
}