#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    string s; int cnt = 0;
    cin >> s;

    cnt = s.length();

    for(int i=1; i<s.length(); i++){
        if ((s[i] == '=') && (s[i - 1] == 'c' || s[i - 1] == 's' || (s[i - 1] == 'z' && s[i - 2] != 'd')))
            cnt--;
        else if ((s[i] == '=') && (s[i-1] == 'z') && (s[i-2] == 'd'))
            cnt -= 2;
        else if (s[i] == '-' && (s[i-1] == 'c' || s[i-1] == 'd'))
            cnt--;
        else if (s[i] == 'j' && (s[i-1] == 'n' || s[i-1] == 'l'))
            cnt--;
    }

    cout << cnt;

    return 0;
}