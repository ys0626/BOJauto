#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    int input, num = 1;
    cin >> input;

    while (num < input){
        input -= num;
        num++;
    }

    if (num % 2 == 1)
        cout << num + 1 - input << '/' << input << endl;
    else
        cout << input << '/' << num + 1 - input << endl;\
        
    return 0;
}