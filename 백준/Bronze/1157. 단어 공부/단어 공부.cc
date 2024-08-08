#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    string s, maxAlph; int cnt = 0, max = 0, idx;
    int arr[26] = {0,};
    cin >> s;

    for(int i=0; i<s.length(); i++){
        s[i] = toupper(s[i]);
        idx = s[i] - 65;
        arr[idx] += 1;
        if(max < arr[idx]){
            max = arr[idx];
            maxAlph = s[i];
        }
    }

    for(int i=0; i<26; i++)
        if(max == arr[i]) cnt+=1;

    if(cnt>1)
        cout << '?';
    else
        cout << maxAlph << endl;

    
    return 0;
}