#include <bits/stdc++.h>

#define MAX 1123456

using namespace std;

int bsearch(int inf, int sup, int val, int *v) {
    int mid;

    while (true) {
        mid = (sup + inf) / 2;

        if (v[mid] == val)
            break;
        else if (v[mid] > val)
            sup = mid - 1;
        else
            inf = mid + 1;
    }

    return mid;
}

int main(int argc, char *argv[]) {
    int n, m, aux;
    int total = 0;

    int ni[MAX]; // casas
    int mi[MAX]; // ordem entregas

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++)
        scanf("%d", &ni[i]);

    for (int i = 0; i < m; i++) {
        scanf("%d", &aux);
        mi[i] = bsearch(0, n, aux, ni);
    }

    total += abs(mi[0] - 0);

    for (int i = 1; i < m; i++)
        total += abs(mi[i] - mi[i-1]);

    printf("%d\n", total);

    return 0;
}
