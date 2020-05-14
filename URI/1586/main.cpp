#include <bits/stdc++.h>

#define MAX 112345
#define MAX_NOME 11

typedef long long ll;

using namespace std;

ll f[MAX];
char v[MAX][MAX_NOME];

int forca (int i) {
    int x = 0;

    for (auto& it : v[i])
        x += it;

    return x;
}

ll forca_grupo(int inicio, int fim, int cur, bool is_a) {
    ll fg = 0;
    int acc = 1;

    if (is_a) {
        while (cur >= inicio) {
            fg += f[cur] * acc;
            cur--;
            acc++;
        }
    }
    else {
        while (cur <= fim) {
            fg += f[cur] * acc;
            cur++;
            acc++;
        }
    }

    return fg;
}



int main(int argc, char *argv[]) {
    int n, inf, sup, d;
    ll fa, fb;

    while (scanf("%d", &n), n != 0) {

        memset(v, 0, MAX * MAX_NOME);
        memset(f, 0, MAX);

        bool empate = false;

        for (int i = 0; i < n; i++) {
            scanf("%s", &v[i][0]);
            f[i] = forca(i);
        }

        inf = 0;
        sup = n - 1;

        while (inf <= sup) {
            d = inf + (sup - inf) / 2;

            fa = forca_grupo(0, d, d, true);
            fb = forca_grupo(d+1, n - 1, d+1, false);

            if (fa < fb)
                inf = d + 1;
            else if (fa > fb)
                sup = d - 1;
            else {
                printf("%s\n", v[d]);
                empate = true;
                break;
            }

        }

        if (!empate) printf("Impossibilidade de empate.\n");
    }

    return 0;
}
