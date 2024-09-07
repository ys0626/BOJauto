#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int a, b, res;
    
    while(true) {
        cin >> a >> b;
        if (a==0 && b==0)
            break;
        if (a > b) {
            res = a % b;
            if (res == 0)
                cout << "multiple" << endl;
            else
                cout << "neither" << endl;
        }
        else {
            res = b % a;
            if (res == 0)
                cout << "factor" << endl;
            else
                cout << "neither" << endl;
        }
    }

    return 0;
}