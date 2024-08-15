#include <bits/stdc++.h>
#define fast_io cin.tie(NULL); ios_base::sync_with_stdio(false);
using namespace std;
 
int main()
{
    fast_io
    char s[5][16] = {'\0', }; char c;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 16; j++){
            c = getchar();
            if (c == '\n' || c == EOF)
                break;
            s[i][j] = c;
        }
    }

    for (int i = 0; i < 15; i++){
        for (int j = 0; j < 5; j++){
            if (s[j][i] == '\0')
                continue;
            printf("%c", s[j][i]);
        }
    }

    return 0;
}