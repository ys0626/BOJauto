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
    int N, M;
    cin >> N >> M;
    int arr[N];
    for(int i=0; i<N; i++)
        arr[i]=i+1;

    int i, j, temp;
    for(int n=0; n<M; n++){
        cin >> i >> j;
        temp=arr[i-1];
        arr[i-1]=arr[j-1];
        arr[j-1]=temp;
    }

    for(int a=0; a<N; a++)
        cout << arr[a] << " ";

    return 0;
}