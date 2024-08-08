#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << string(n-i, ' ') << string(2*i-1, '*') << endl;
    }

    for(int i=1; i<n; i++){
        cout << string(i, ' ') << string(2*(n-i)-1, '*') << endl;
    }

    return 0;
}