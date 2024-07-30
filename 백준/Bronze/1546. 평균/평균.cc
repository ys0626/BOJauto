#include <bits/stdc++.h>
#include <algorithm>
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
    int N;
    float max, scores = 0;
    cin >> N;
    float arr[N];

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    max = *max_element(arr, arr+N);

    for(int i=0; i<N; i++){
        arr[i] = (arr[i]/max)*100;
        scores += arr[i];
    }

    cout << float(scores/N);

    return 0;
}