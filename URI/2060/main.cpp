#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int d = 0, t = 0, q = 0, c = 0;

    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);

        if (v[i] % 2 == 0)
            d++;
        if (v[i] % 3 == 0)
            t++;
        if (v[i] % 4 == 0)
            q++;
        if (v[i] % 5 == 0)
            c++;
    }

    printf("%d Multiplo(s) de %d\n", d, 2);
    printf("%d Multiplo(s) de %d\n", t, 3);
    printf("%d Multiplo(s) de %d\n", q, 4);
    printf("%d Multiplo(s) de %d\n", c, 5);


    return 0;
}
