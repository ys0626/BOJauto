#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    int T, R;
    string S;
    cin >> T;

    for(int i=0; i<T; i++){
        cin >> R >> S;
        for(int j=0; j<S.length(); j++)
            for(int k=0; k<R; k++)
                cout << S[j];
        cout << endl;
    }

    return 0;
}