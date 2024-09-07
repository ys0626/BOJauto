#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int day = 1, A, B, V;
    cin >> A >> B >> V;
    
    day += (V - A) / (A - B);
    if ((V - A) % (A - B) != 0)
        day += 1;
    
    cout << day;
    return 0;
}