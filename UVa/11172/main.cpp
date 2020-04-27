#include <bits/stdc++.h>

int main() {
    int a, b, t;

    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &a, &b);

        printf("%c\n", a > b ? '>' : a < b ? '<' : '=');
    }

    return 0;
}
