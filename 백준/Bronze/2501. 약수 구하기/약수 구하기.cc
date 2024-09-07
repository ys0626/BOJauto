#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int n, k, count = 0, res;
    cin >> n >> k;

    for (int i = 1; i <= n; i++){
        res = n % i;
        if (res == 0)
            count++;
        if (count == k){
            cout << i;
            break;
        }
    }

    if (count != k)
        cout << 0;

    return 0;
}