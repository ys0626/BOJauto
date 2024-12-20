#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int N, M, max = 0, num;
    cin >> N >> M;

    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }

    for (int j = 0; j < N; j++){
        for (int k = j+1; k < N; k++){
            for (int l = k+1; l < N; l++){
                num = arr[j] + arr[k] + arr[l];
                if ((num <= M) && (max < num))
                    max = num;
            }
        }
    }

    cout << max;

    return 0;
}