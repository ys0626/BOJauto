#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
#define endl '\n'
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int main(){
    fast_io
    int num, a;
    cin >> num;
    int* arr;

    for(int i = 0; i < num; i++){
        cin >> a;
        if (a == 0){
            cout << "1 0" << endl;
        }
        else if ( a == 1){
            cout << "0 1" << endl;
        }
        else{
            arr = new int[41];
            arr[0] = 1, arr[1] = 1;
            for (int i = 2; i <= a; i++)
                arr[i] = arr[i - 1] + arr[i - 2];
            cout << arr[a - 2] << " " << arr[a - 1] << endl;
        }
    }

    return 0;
}