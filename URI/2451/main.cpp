#include <bits/stdc++.h>

using namespace std;

int n;
int best = 0;
int cur = 0;

void f(char c) {
    if (c == 'o')
        cur++;
    else if (c == 'A') {
        if ( cur > best)
            best = cur;
        cur = 0;
    }
}

int main(int argc, char *argv[]) {
    // left to right
    bool ltr = true;

    scanf("%d", &n);

    char str[n][n];

    for (int i = 0; i < n; i++) {
        scanf("%s", &str[i][0]);

        if (ltr) {
            for (int j = 0; j < n; j++)
                f(str[i][j]);
        }
        else {
            for (int j = n - 1; j >= 0; j--)
                f(str[i][j]);
        }

        // flip direction
        ltr = !ltr;
    }

    if (cur > best)
        best = cur;

    printf("%d\n", best);

    return 0;
}
