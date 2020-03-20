#include <bits/stdc++.h>

#define MAX 112345
#define MAX_NOME 10

using namespace std;

int f[MAX];
char v[MAX][MAX_NOME];

int forca (int i) {
    int x = 0;

    for (auto& it : string(v[i]))
        x += it;

    return x;
}

int forca_grupo(int inicio, int fim, int cur) {
    int fg = 0;
    int acc = 1;

    if (cur > inicio) {
        while (cur >= 0) {
            fg += f[cur] * acc;
            cur--;
            acc++;
        }
    }

    else {
        while (cur < fim) {
            fg += f[cur] * acc;
            cur++;
            acc++;
        }
    }

    return fg;
}



int main(int argc, char *argv[]) {
    int n;

    while (scanf("%d", &n), n != 0) {

        getchar();

        for (int i = 0; i < n; i++) {
            scanf("%s", &v[i][0]);
            f[i] = forca(i);
        }

        int inf = 0;
        int sup = n;

        while (sup - inf > 1) {
            int d = (inf + sup) / 2;

            int fa = forca_grupo(0, d, d);
            int fb = forca_grupo(d+1, n, d+1);

            if (fa < fb)
                inf = d;
            else if (fa > fb)
                sup = d;
            else {
                printf("%s\n", v[d]);
                break;
            }

            if (sup - inf <= 1) printf("Impossibilidade de empate.\n");

        }

    }

    return 0;
}