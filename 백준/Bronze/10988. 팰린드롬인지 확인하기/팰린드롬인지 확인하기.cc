#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    string s; int len, check = 0;
    cin >> s;
    len = s.length();

    for(int i=0; i<len/2; i++){
        if(s[i]!=s[len-(i+1)]){
            check = 0;
            break;
        }
        else check = 1;
    }
    
    if(len == 1)
        cout << 1;
    else    
        cout << check;

    return 0;
}