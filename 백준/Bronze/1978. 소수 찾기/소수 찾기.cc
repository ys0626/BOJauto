#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    int N, num, numcnt = 0;

    cin >> N;
    int arr[N], cnt[1000] = {0}; // 중복인 수 파악

    for(int i = 0; i < N; i++){
        cin >> num; arr[i] = num;
        cnt[arr[i]]++;
        if (cnt[arr[i]] > 1) // 중복이면 소수 판별 스킵킵
            continue;

        for (int j = 2; j <= num; j++){ // 소수 판별별
            if (num == 2)
                numcnt++;
            if (num % j == 0)
                break;
            if (j == num - 1)
                numcnt++;
        }
    }

    cout << numcnt;

    return 0;
}