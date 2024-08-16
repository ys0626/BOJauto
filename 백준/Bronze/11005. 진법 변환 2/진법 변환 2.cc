#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    int n, b, tmp;
    string res;
    cin >> n >> b;

    while (n > 0){
        tmp = n % b;
        if (tmp <= 9)
            res += tmp + '0';
        else
            res += tmp - 10 + 'A';
        n /= b;
    }

    reverse(res.begin(), res.end());
    cout << res;

    return 0;
}