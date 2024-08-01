#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int N; long long sum = 0;
    string num;
    cin >> N >> num;

    for(int i=0; i<N; i++)
        sum += int(num[i]) - '0'; // 0의 아스키코드를 빼주면 해당하는 수가 나옴

    cout << sum;
    return 0;
}