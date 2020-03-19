#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int x,y;
    int r,b,c,m;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);

        r = 9 * pow(x, 2) + pow(y, 2);
        b = 2 * pow(x, 2) + 25 * pow(y, 2);
        c = -100 * x + pow(y, 3);

        m = max(r, b);
        m = max(m ,c);

        printf("%s ganhou\n", m == r ? "Rafael" : (m == c) ? "Carlos" : "Beto");
    }

    return 0;
}
