#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlll;
#define xx first
#define yy second
 
int main()
{
    fast_io
    int num; string str;
    cin >> num;

    for(int i=0; i<num; i++){
        cin >> str;
        cout << str[0] << str[str.length() - 1] << endl;
    }

    return 0;
}