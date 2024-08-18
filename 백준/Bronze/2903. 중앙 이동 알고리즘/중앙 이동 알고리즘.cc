#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int n, p, res = 4;
    cin >> n;

    for (int i = 1; i <= n; i++){
        res += 5;
        if (n == 1)
            break;
        p = pow(2, i) - 2;
        res += 4 * p;
        res += 3 * (pow(4, i-1) - p - 1);
    }

    cout << res;
    return 0;
}