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
    int N, M, i, j, temp;
    cin >> N >> M;
    int arr[N];
    for(int l=0; l<N; l++){
        arr[l] = l+1;
    }

    for(int n=0; n<M; n++){
        cin >> i >> j;
        while (j > i){
            temp = arr[i - 1];
            arr[i - 1] = arr[j - 1];
            arr[j - 1] = temp;
            i++;
            j--;
        }
    }

    for(int r=0; r<N; r++){
        cout << arr[r] << " ";
    }

    return 0;
}