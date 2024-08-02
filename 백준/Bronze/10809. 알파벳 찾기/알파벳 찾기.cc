#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    string S; int alph[26]; int num = 0;
    cin >> S;

    for(int i=0; i<26; i++)
        alph[i] = -1;

    for(int i=0; i<S.length(); i++){
        num = S[i] - 97;
        if(alph[num]==-1)
            alph[num] = i;
    }

    for(int i=0; i<26; i++)
        cout << alph[i] << " ";
        
    return 0;
}