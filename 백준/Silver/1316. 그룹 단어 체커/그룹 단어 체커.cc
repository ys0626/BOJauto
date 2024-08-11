#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int n, cnt = 0, f = -1; string s;
    cin >> n;
    cnt = n;

    for (int i=0; i<n; i++){
        cin >> s;
        for (int j=0; j<s.length(); j++){
            f = s.find(s[j], j + 1);
            if (f != -1 && s[f] != s[f-1]){
                cnt--;
                break;
            }
        }
    }

    cout << cnt;

    return 0;
}