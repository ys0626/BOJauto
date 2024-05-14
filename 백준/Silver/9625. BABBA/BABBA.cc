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
    int dp[41];

    for(int i = 1; i <= n; i++) dp[i] = i;

    for(int i = 1; i <= n; i++){

        if (n == 1){
            cout << "0 1" << endl;
        }
        else{
            for (int i = 3; i <= n; i++)
                dp[i] = dp[i - 1] + dp[i - 2];
            cout << dp[n - 2] << " " << dp[n - 1] << endl;
            break;
        }
    }
    
    return 0;
}