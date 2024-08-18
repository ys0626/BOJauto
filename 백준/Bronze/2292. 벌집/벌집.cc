#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    int n, sum = 1, res;
    cin >> n;

    for(int i = 0; i < n; i++){
        if (n == 1){
            res = 1;
            break;
        }

        sum += i * 6;

        if (sum < n && n <= sum + (i + 1) * 6){
            res = i + 2;
            break;
        }
    }

    cout << res;
    return 0;
}