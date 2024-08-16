#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;

int main()
{
    fast_io
    string num; int n; long long res = 0;
    cin >> num >> n;
    int len = num.length();

    for (int i = 0; i < len; i++){
        if (n == 10){
            res = stoi(num);
        }
        else{
            if (num[i] >= 65)
                res += (num[i] - 55) * pow(n, len - (i + 1));
            else
                res += (num[i] - '0') * pow(n, len - (i + 1));
        }
    }

    cout << res;
    return 0;
}