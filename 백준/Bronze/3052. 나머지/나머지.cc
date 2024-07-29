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
    int n, res, count = 0;
    int arr[42]={0,};

    for(int i=0; i<10; i++){
        cin >> n;
        res = n%42;
        arr[res] = 1;
    }

    for(int j=0; j<42; j++){
        if (arr[j]!=0)
            count++;
    }

    cout << count;

    return 0;
}