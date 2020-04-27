#include <bits/stdc++.h>

int main() {
    int a,b,c,d;
    const int deg = 360 / 40;

    while (scanf("%d%d%d%d", &a, &b, &c, &d), (a||b)) {
        int rot = 360 * 3;
        rot += ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * deg;
        printf("%d\n", rot);
    }

    return 0;
}
