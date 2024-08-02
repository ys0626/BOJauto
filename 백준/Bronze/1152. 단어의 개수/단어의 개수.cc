#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    string s; int num = 0;
    getline(cin, s);

    for(int i=1; i<s.length(); i++){
        if(s[i]==32)
            num += 1;
    }
    num += 1;

    if(s[s.length()-1]==32)
        num -=1;
        
    cout << num;

    return 0;
}