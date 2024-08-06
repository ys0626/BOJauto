#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    string s; int res = 0;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i]-64<4)
            res += 3;
        else if(s[i]-64<7)
            res += 4;
        else if(s[i]-64<10)
            res += 5;
        else if(s[i]-64<13)
            res += 6;
        else if(s[i]-64<16)
            res += 7;
        else if(s[i]-64<20)
            res += 8;
        else if(s[i]-64<23)
            res += 9;
        else
            res += 10;
    }
    cout << res;
    return 0;
}