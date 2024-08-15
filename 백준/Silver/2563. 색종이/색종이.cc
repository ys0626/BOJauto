#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int arr[101][101] = {0, }; int n, x, y, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x >> y;
        for (int j = x; j < x + 10; j++){
            for (int k = y; k < y+10; k++){
                if (arr[j][k] == 1)
                    continue;
                arr[j][k] = 1;
                sum += 1;
            }
        }
    }
    cout << sum;
    return 0;
}