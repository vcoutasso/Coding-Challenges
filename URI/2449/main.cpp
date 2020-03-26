#include <bits/stdc++.h>

using namespace std;

int unlocked(int *v, int n, int m){
    for (int i = 0; i < n; i++) {
        if (v[i] != m)
            return 0;
    }

    return 1;
}

int main(int argc, char *argv[]) {
    int n;
    int m;
    int total = 0;

    scanf("%d%d", &n, &m);

    int v[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);

    while (!unlocked(v, n, m)) {
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == m)
                continue;

            int diff = abs(m - v[i]);

            if (v[i] + diff == m) {
                v[i] += diff;
                v[i+1] += diff;
            }
            else {
                v[i] -= diff;
                v[i+1] -= diff;
            }

            total += diff;
        }
    }

    printf("%d\n", total);

    return 0;
}
