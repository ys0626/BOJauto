#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int a, b, c = 1;

    while (true){
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;

        if ((b*b+a*a==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
            cout << "right" << endl;
        else
            cout << "wrong" << endl;
    }

    return 0;
}