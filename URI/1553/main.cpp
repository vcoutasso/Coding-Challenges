#include <bits/stdc++.h>

#define MAX 112

using namespace std;

int main(int argc, char *argv[]) {
    int n, k;
    int aux;

    while (scanf("%d%d", &n, &k), n != 0 || k != 0) {
        int v[MAX];
        int acc = 0;

        for (int i = 0; i < MAX; i++)
            v[i] = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &aux);
            v[aux-1] += 1;
        }

        for (int i = 0; i < MAX; i++) {
            if (v[i] >= k)
                acc++;
        }

        printf("%d\n", acc);
    }

    return 0;
}
