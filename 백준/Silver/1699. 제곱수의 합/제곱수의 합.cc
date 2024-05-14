#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
int main(){
    fast_io
    int n;
    cin >> n;

    int dp[100001];
    for(int i = 0; i <= n; i++)
        dp[i] = i;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j*j <= i; j++){
            dp[i] = min(dp[i], dp[i-j*j]+1);
        }
    }
    
    cout << dp[n];
    
    return 0;
}