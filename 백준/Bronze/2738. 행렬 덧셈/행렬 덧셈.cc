#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    int n, m;
    cin >> n >> m;
    int a[n][m], b[n][m], re[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            re[i][j] = a[i][j] + b[i][j];
            cout << re[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}