#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int arr[9][9], max = -1, maxRow = 0, maxCol = 0;

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> arr[i][j];
            if (arr[i][j] > max){
                max = arr[i][j];
                maxRow = i+1;
                maxCol = j+1;
            }   
        }
    }

    cout << max << endl << maxRow << ' ' << maxCol;
    return 0;
}