#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    int n, change; string res = "";
    cin >> n;

    for(int i; i < n; i++){
        cin >> change;
        int tmp;
        tmp = change / 25;
        res += to_string(tmp); res += " ";
        change = change % 25;
        
        tmp = change / 10;
        res += to_string(tmp); res += " ";
        change = change % 10;

        tmp = change / 5;
        res += to_string(tmp); res += " ";
        change = change % 5;

        tmp = change / 1;
        res += to_string(tmp);

        cout << res << endl;
        res = "";
    }
    
    return 0;
}